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

	void AddTension(int value);
	float GetVolume();
	void Init(String defsFilename);
	void InitString(String defs);
	void InitAudioDevice();
	bool IsPaused();
	bool IsPlaying();
	bool IsTrackPlaying(String name);
	void LoadTrack(String name);
	void Pause();
	void PlayTrack(String name);
	void PlayTrackWithStringRandom(String str);
	void PlayTrackByGroupRandom(String group);
	void PlayTrackByGroupAndSubgroupRandom(String group, String subgroup);
	void Resume();
	void SetMainLoopCondition(int value);
	void SetCondition(int id, int value);
	void SetTension(int value);
	void SetVolume(float vol);
	void StopPlaying();
};

#endif
