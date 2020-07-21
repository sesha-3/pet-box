#pragma once

#include <string>

#define NAME = "Name"
#define ID   = "Id"
#define KEY  = "Key"

struct node{
	std::string name;
	std::string id;
	std::string key;

	node(std::string& name, std::string& id, std::string& key):name(name),id(id),key(key) {}

	void setName(std::string& name) {
		this->name = name;
	}
	void setId(std::string& id) {
		this->id = id;
	}
	void setKey(std::string& key) {
		this->key = key;
	}
};
