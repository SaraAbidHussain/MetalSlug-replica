#include "TextureManager.h"

void TextureManager :: LoadTextures() {
    bg = LoadTexture("perfectBG1.png");
    playerLeftTexture = LoadTexture("left face.png");
    playerRightTexture = LoadTexture("main_char.png");
    enemyTexture1 = LoadTexture("enemy1.png");
    enemyTexture2 = LoadTexture("enemy2.png");
    skyEnemyTexture = LoadTexture("skyEnemy.png");
    missileTexture = LoadTexture("missile.png");
    bulletTexture = LoadTexture("bullets.png");
    bulletLeftTexture = LoadTexture("bulletsLeft.png");
    healthTexture = LoadTexture("health.png");
    end1Texture = LoadTexture("end1.png");
    end2Texture = LoadTexture("end2.png");
    goldCoinTexture = LoadTexture("goldCoins.png");
    silverCoinTexture = LoadTexture("silverCoins.png");
    heartTexture = LoadTexture("heartBlink.png");
    pauseTexture = LoadTexture("pauseScreen.png");

}


void TextureManager :: UnloadTextures() {
        UnloadTexture(bg);
        UnloadTexture(playerLeftTexture);
        UnloadTexture(playerRightTexture);
        UnloadTexture(enemyTexture1);
        UnloadTexture(enemyTexture2);
        UnloadTexture(skyEnemyTexture);
        UnloadTexture(missileTexture);
        UnloadTexture(bulletTexture);
        UnloadTexture(bulletLeftTexture);
        UnloadTexture(healthTexture);
        UnloadTexture(end1Texture);
        UnloadTexture(end2Texture);
        UnloadTexture(goldCoinTexture);
        UnloadTexture(silverCoinTexture);
        UnloadTexture(goldCoinTexture);
        UnloadTexture(silverCoinTexture);
        UnloadTexture(heartTexture);
        UnloadTexture(pauseTexture);
}

Texture2D TextureManager :: LoadSpecificTexture(const char* filename) {
    return LoadTexture(filename);
}

Texture2D TextureManager::GetBackgroundTexture() const { return bg; }
Texture2D TextureManager::GetPlayerLeftTexture() const { return playerLeftTexture; }
Texture2D TextureManager::GetPlayerRightTexture() const { return playerRightTexture; }
Texture2D TextureManager::GetEnemyTexture1() const { return enemyTexture1; }
Texture2D TextureManager::GetEnemyTexture2() const { return enemyTexture2; }
Texture2D TextureManager::GetSkyEnemyTexture() const { return skyEnemyTexture; }
Texture2D TextureManager::GetMissileTexture() const { return missileTexture; }
Texture2D TextureManager::GetBulletTexture() const { return bulletTexture; }
Texture2D TextureManager::GetBulletLeftTexture() const { return bulletLeftTexture; }
Texture2D TextureManager::GetHealthTexture() const { return healthTexture; }
Texture2D TextureManager::GetEnd1Texture() const { return end1Texture; }
Texture2D TextureManager::GetEnd2Texture() const { return end2Texture; }
Texture2D TextureManager::GetGoldCoinTexture() const { return goldCoinTexture; }
Texture2D TextureManager::GetSilverCoinTexture() const { return silverCoinTexture; }
Texture2D TextureManager::GetHeartTexture() const { return heartTexture; }
Texture2D TextureManager::GetPauseTexture() const { return pauseTexture; }