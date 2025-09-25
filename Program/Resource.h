#pragma once
class Resource
{
public:
	Resource();

	void Share(Resource clone);

	~Resource();
};

