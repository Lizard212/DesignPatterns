#pragma once

#include<iostream>
class Tree  {
private:

	string  leaf_tint;     // intrinsic state
	string   positon;     // intrinsic state
public:
	
	void SetLeaf_tint(string _color)
	{
		_color = leaf_tint;
	}
	void SetPositon(string _positon)
	{
		_positon = positon;
	}
	
	void Display()
	{
		cout << "Tree " + tree_model->GetTexture() + " " + leaf_tint + " " + positon;
	}
};
