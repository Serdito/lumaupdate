#pragma once

#include "../Screen.h"

class ProgressScreen : public Screen {
public:
	void Render();
	ProgressScreen();
	~ProgressScreen();

	void SetStepTitle(std::string stepTitle, bool archivePrevious = true);
	void SetStepProgress(int currentProgress, int maxProgress = 10);
	void SetStepProgressInfinite();

private:
	sftd_font* bigfont;
	sftd_font* smallfont;
	sf2d_texture* background;
	std::string currentStep;
	std::vector<std::string> pastSteps;
	int currentStepProgress = 0, currentStepProgressCount = 0;
	bool currentStepProgressInfinite = false;
	float currentAnimationTimer = 0;
};