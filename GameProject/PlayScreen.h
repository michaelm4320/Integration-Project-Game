#ifndef _PLAYSCREEN_H
#define _PLAYSCREEN_H
#include "InputManager.h"
#include "StartScreen.h"
#include "PlayBG.h"
#include "Level.h"
#include "Player.h"

class PlayScreen : public GameEntity {

	private:

		Timer* mTimer;
		InputManager* mInput;
		AudioManager* mAudio;
		
		PlayBG* mPlayBG;
		
		Texture* mStartLabel;

		float mLevelStartTimer;
		float mLevelStartDelay;

		bool mGameStarted;

		Level* mLevel;
		bool mLevelStarted;
		int mCurrentStage;

		Player* mPlayer;

	private:

		void StartNextLevel();

	public:

		PlayScreen();
		~PlayScreen();
		
		void StartNewGame();

		bool GameOver();

		void Update();

		void Render();
};

#endif
