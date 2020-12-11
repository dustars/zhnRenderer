/*
	Description:
	Model class

	Modified From: https://learnopengl.com/Model-Loading/Model
*/

#pragma once
#include <vector>
#include <string>
#include <unordered_map>
#include "Mesh.h"
#include "Texture.h"
#include <assimp/Importer.hpp>
#include <assimp/scene.h>
#include <assimp/postprocess.h>

class Model
{
public:
	Model(const std::string& path);

	void Draw();

private:
	std::vector<Mesh> meshes;
	std::unordered_map<Mesh*, std::vector<Texture>> materials;
	std::string directory;

	void ProcessNode(aiNode* node, const aiScene* scene);
	void ProcessMesh(aiMesh* mesh, const aiScene* scene);
};
