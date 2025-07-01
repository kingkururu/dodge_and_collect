//
//  game.hpp
//  sfmlgame2
//
//  Created by Sunmyoung Yun on 2024/08
//
#ifndef game_hpp
#define game_hpp

#include <SFML/Graphics.hpp>
#include <iostream>
#include "sprites.hpp"
#include "sound.hpp"
#include "fonts.hpp"

class GameManager {
public:
    GameManager();
    ~GameManager();
    void runGame();
    
private:
    void createAssets();
    void createMoreAssets();
    void handleEventInput();
    void handleGameEvents();
    void checkEvent();
    void countTime();
    void updateSprites();
    void draw();
    void deleteAssets();
    void restartGame();
    void destroyAll();

    sf::RenderWindow window;
    sf::Clock clock;
    
    Sprite* background; 

    Player* playerSprite;
    std::vector<sf::IntRect> playerAnimRect;
    float playerSetRectTime; 
    int playerCurrentIndex{};

    Heart* heart; 
    std::vector<sf::IntRect> heartAnimRect;

    std::vector<Rain*> rainDrops;
    float rainRespawnTime; 
    std::vector<sf::IntRect> rainAnimRect;

    std::vector<Coin*> coins;
    float coinRespawnTime;

    std::vector<Lightning*> lightnings;
    float lightningRespawnTime; 
    std::vector<sf::IntRect> lightningAnimRect;
    int lightningCurrentIndex{};
    float lightningSetRectTime; 

    std::vector<TextClass*> endMessage;
    std::string endingText;

    TextClass* scoreText; 

    MusicClass* backgroundMusic;
    SoundClass* playerDeadSound;
    SoundClass* coinSound;
    SoundClass* rainSound;
    SoundClass* lightningSound; 
};

#endif /* game_hpp */
