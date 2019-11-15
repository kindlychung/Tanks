#include "appconfig.h"

string AppConfig::texture_path = "texture.png";
string AppConfig::levels_path = "levels/";
string AppConfig::font_name = "prstartk.ttf";
string AppConfig::game_over_text = "GAME OVER";
SDL_Rect AppConfig::map_rect = {0, 0, 26*16, 26*16};
SDL_Rect AppConfig::status_rect = {26*16, 0, 3*16, AppConfig::map_rect.h};
SDL_Rect AppConfig::windows_rect = {0, 0, AppConfig::map_rect.w + AppConfig::status_rect.w, AppConfig::map_rect.h};
SDL_Rect AppConfig::tile_rect = {0, 0, 16, 16};

vector<SDL_Point> AppConfig::player_starting_point =
[]{
    vector<SDL_Point> v;
    v.push_back({128, 384});
    v.push_back({256, 384});
    return v;
}();
vector<SDL_Point> AppConfig::enemy_starting_point =
[]{
    vector<SDL_Point> v;
    v.push_back({1, 1});
    v.push_back({192, 1});
    v.push_back({384, 1});
    return v;
}();
vector<Player::PlayerKeys> AppConfig::player_keys =
[]{
    vector<Player::PlayerKeys> v;
    v.push_back({SDL_SCANCODE_W, SDL_SCANCODE_S, SDL_SCANCODE_A, SDL_SCANCODE_D, SDL_SCANCODE_LCTRL});
    v.push_back({SDL_SCANCODE_UP, SDL_SCANCODE_DOWN, SDL_SCANCODE_LEFT, SDL_SCANCODE_RIGHT, SDL_SCANCODE_RCTRL});
    return v;
}();
unsigned AppConfig::level_start_time = 2000;
unsigned AppConfig::slip_time = 220;
unsigned AppConfig::enemy_start_count = 28;
unsigned AppConfig::enemy_redy_time = 500;
unsigned AppConfig::player_bullet_max_size = 2;
unsigned AppConfig::score_show_time = 200;
unsigned AppConfig::bonus_show_time = 15000;
unsigned AppConfig::tank_shield_time = 8000;
unsigned AppConfig::tank_frozen_time = 8000;
unsigned AppConfig::level_end_time = 5000;
unsigned AppConfig::protect_eagle_time = 19000;
unsigned AppConfig::bonus_blink_time = 350;
unsigned AppConfig::player_reload_time = 220;
int AppConfig::enemy_max_count_on_map = 7;
double AppConfig::game_over_entry_speed = 0.13;
double AppConfig::tank_default_speed = 0.08;
double AppConfig::bullet_default_speed = 0.24;
bool AppConfig::show_enemy_target = false;
