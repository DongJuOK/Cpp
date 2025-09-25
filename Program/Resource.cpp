#include "stdafx.h"
#include "Resource.h"

Resource::Resource()
{
	cout << "Created Resource" << endl;
}

void Resource::Share(Resource clone)
{

}

Resource::~Resource()
{
	cout << "Destroy Resource" << endl;
}
