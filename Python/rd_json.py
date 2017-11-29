#coding:utf-8

import pandas as pd 
import json

df = pd.read_csv('train.csv')
synset = sorted(set(df['label_id']))
n = len(df)

X_224 = nd.zeros((n, 3, 224, 224))
X_299 = nd.zeros((n, 3, 299, 299))
y = nd.zeros((n,))

mean = np.array([0.485, 0.456, 0.406])
std = np.array([0.229, 0.224, 0.225])

for i, (iamge_id, label_id,image_url) in tqdm(df.iterrows(), total=n):
    img = cv2.imread('/media/yijie/文档/dataset/ai_challenger_scene_train_20170904/scene_train_images_20170904/%s.jpg' % iamge_id)
    img_224 = ((cv2.resize(img, (224, 224))[:,:,::-1] / 255.0 - mean) / std).transpose((2, 0, 1))
    img_299 = ((cv2.resize(img, (299, 299))[:,:,::-1] / 255.0 - mean) / std).transpose((2, 0, 1))
    
    X_224[i] = nd.array(img_224)
    X_299[i] = nd.array(img_299)
    
    y[i] = synset.index(label_id)
    
    nd.waitall()