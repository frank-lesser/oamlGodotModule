#ifndef __OAML_GODOT_MODULE_H__
#define __OAML_GODOT_MODULE_H__

#include "oaml.h"
#include "reference.h"



class oamlGodotModule : public Reference {
	OBJ_TYPE(oamlGodotModule, Reference);

protected:
	oamlApi *oaml;

	static void _bind_methods();

public:
	oamlGodotModule();

	void Init(String defsFilename);
	void InitAudioDevice();
	void PlayTrack(String name);
	void SetMainLoopCondition(int value);
	void SetCondition(int id, int value);
};

#endif