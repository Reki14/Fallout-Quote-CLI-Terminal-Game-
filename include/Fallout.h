#ifndef FALLOUT_NV
#define FALLOUT_NV

#include<iostream>
#include<vector>
#include<thread>
#include<atomic>
#include<termios.h>
#include<unistd.h>
#include<csignal>

class Colors {
public:
    static constexpr const char* RESET   = "\033[0m";
    static constexpr const char* RED     = "\033[31m";
    static constexpr const char* GREEN   = "\033[32m";
    static constexpr const char* YELLOW  = "\033[33m";
    static constexpr const char* BLUE    = "\033[34m";
    static constexpr const char* MAGENTA = "\033[35m";
    static constexpr const char* CYAN    = "\033[36m";
    static constexpr const char* ORANGE  = "\033[38;5;208m";
    static constexpr const char* PURPLE  = "\033[38;5;141m";
    static constexpr const char* ORANGE2 = "\033[38;2;255;165;0m";

};

class Humorous_Wasteland_Struggles {
private:
    std::vector<std::string> strs {
        "---------------------------------- Humorous_Wasteland_Struggles --------------------------------------",
        "He/him | Mr. New Vegas' favorite guest | Probably gambling at The Tops.",
        "Survived a headshot, still making bad decisions.",
        "The real Courier Six, accept no imitations.",
        "Mojave Express lost my paycheck, so now I’m working freelance.",
        "Woke up in Goodsprings with a headache and a vendetta.",
        "Tried to take a shortcut across Quarry Junction… mistakes were made.",
        "Spent all my caps at The Tops, now I’m back to looting Sunset Sarsaparilla crates.",
        "Currently on my way to New Vegas. Any caps to spare?",
        "I came to the Mojave for the sights. I stayed because a Deathclaw is blocking the exit.",
        "Looking for Benny. Last seen running like he owes me money (because he does).",
        "Tried my luck at Gomorrah. Now I owe them a Brahmin and half my dignity.",
        "Tried gambling at The Tops… now I’m broke.",
        "Avoiding Deathclaws, one detour at a time.",
        "Wandering… totally not lost.",
        "Waiting for a Stimpak sale.",
        "Sunburned and underpaid.",
        "Avoiding radscorpions. So far, so good.",
        "Trading caps for stories in the Mojave.",
        "Running from Deathclaws. Send help.",
        "Waiting for a Stimpak, but the Mojave's slow.",
        "I’m like the Courier, but instead of delivering packages, I’m delivering laughs.",
        "They say war never changes. But my bad decisions do.",
        "Catch me in the Mojave doing something stupid... again.",
        "If you see me, don’t worry—I'm probably just trying to figure out how to fight a Deathclaw without dying.",
        "Wandering the Mojave, avoiding responsibilities.",
        "Like the Courier, I also make impulsive decisions.",
        "I play Fallout: New Vegas instead of dealing with my real-life quests.",
        "My luck stat is low, and it shows.",
        "Certified Mojave Wanderer. May or may not have wiped out the Legion.",
        "Playing Fallout: New Vegas for the 100th time instead of fixing my life.",
        "If it ain't got a cowboy hat and an old-world radio, I don't want it.",
        "Scavenging, surviving, and seeing where the road takes me.",
        "Sun-baked, battle-worn, and still standing.",
        "You either leave the Mojave, or it makes you part of it.",
        "The Mojave’s harsh, but so am I.",
        "Just another lost soul roaming the Mojave.",
        "Walking these Mojave roads, one quest at a time.",
        "The Mojave’s my home, the rest is just dead land.",
        "If you need me, I’ll be somewhere between Goodsprings and the Strip.",
        "Chasing sunsets and stories in the Mojave.",
        "Lost in the Wastes, but I’ll find my way.",
        "Just another day in the Mojave heat.",
        "Walking through sandstorms, but still moving forward.",
        "Sunshine and sandstorms. The Mojave never sleeps.",
        "Somewhere between The Strip and the Great Khans.",
        "Questing through the Wasteland, one step at a time.",
        "In the Mojave, the sun’s not the only thing that burns.",
        "You don’t find your way in the Mojave, the Mojave finds a way to change you.",
        "War never changes, but the Mojave? It’ll change you.",
        "A man’s worth out here ain’t in caps, but in the stories folks tell about him.",
    };
    std::atomic<bool> should_print {false};

public:
    void stop();
    void start();

    void printRandomQuote();
};



class Mr_New_Vegas_Radio_Themed {
private:
    std::vector<std::string> strs {
        "---------------------------------- Mr_New_Vegas_Radio_Themed --------------------------------------",
        "Mr. New Vegas told me I’m his favorite guest. You believe that?",
        "You're listening to me, your favorite Courier, bringing you the smoothest jazz in the Wasteland.",
        "Now playing: ‘Big Iron’ on the radio.",
        "Tuned into Mojave Music Radio. Smooth jazz in the Wasteland.",
        "If you hear ‘Blue Moon’ in the background, you know where I am.",
        "Whistling ‘The Wanderer’ while I roam the Mojave.",
        "Caught between ‘The Story of Ringo’ and ‘Ain't That a Kick in the Head.’",
        "Walking through the Mojave, soundtrack provided by Mojave Music Radio.",
        "Now playing: Big Iron.",
        "Tuned to Mojave Music Radio.",
        "Wandering with ‘Blue Moon’ on repeat.",
        "In the Mojave, singing ‘Big Iron.’",
        "Living the Mojave soundtrack.",
        "Lost in the Wasteland, tunes on.",
        "Caught in a Mojave melody.",
        "Whistling ‘The Wanderer’.",
        "Mojave beats, smooth and steady.",
        "In the mood for some ‘Big Iron’.",
        "Mojave radio’s my vibe.",
        "Mojave radio’s playing my tune.",
        "Tuned into the Mojave waves.",
        "Mojave radio’s got the best station.",
        "Catching the Mojave airwaves.",
        "Mojave radio: my kind of station.",
        "Mojave radio’s on, and so am I.",
        "On air: The Courier’s journey continues.",
        "Delivering packages, taking names.",
        "Now broadcasting live from the Mojave.",
        "Courier Six, signing off for now.",
        "Big Iron on my hip…",
        "Now playing: Mojave Music Radio.",
        "Ain’t That a Kick in the Head?",
        "Waiting for Mr. New Vegas to mention me…",
        "Lost in the music of the Wastes.",
        "Bringing you the smoothest tunes from the heart of the Mojave.",
        "Live from the Mojave, it’s your favorite Courier.",
        "This is Courier Six, signing off from the Mojave.",
        "Tuned into Mojave Music Radio. Static’s just the sound of the past whispering.",
        "Somewhere between Big Iron and Blue Moon, you’ll find me.",
        "Drifting through the Mojave with a six-string and a story.",
        "The Mojave’s just one big jukebox, and I’m picking the next song.",
    };
    std::atomic<bool> should_print {false};

public:
    void stop();
    void start();

    void printRandomQuote();
};

class Faction_Themed {
private:
    std::vector<std::string> strs {
        "---------------------------------- Faction_Themed --------------------------------------",
        "NCR: “Serving the NCR, one overpriced tax at a time.",
        "Legion: “True to… eh, never mind.",
        "Yes Man: “Just a guy programmed to be helpful.",
        "House: “Betting it all on House. What could go wrong?",
        "Indie: “Why pick a side when you can run the show?",
        "NCR: “Patrolling the Mojave almost makes you wish for a nuclear winter.",
        "Legion: *“True to Caesar.” (But do you really want that?) ",
        "House: “In Benny we don’t trust.",
        "Yes Man: “I'm programmed to be helpful!",
    };
    std::atomic<bool> should_print {false};

public:
    void stop();
    void start();

    void printRandomQuote();
};

class Mojave_Vibes_Courier_Energy {
private:
    std::vector<std::string> strs {
        "---------------------------------- Mojave_Vibes_Courier_Energy --------------------------------------",
        "Mr. New Vegas’ favorite guest, on air now.",
        "Delivering messages, making history.",
        "Rolling the dice in New Vegas.",
        "What’s life without a little risk?",
        "The road goes on, and so do I.",
        "The Courier, just passing through the Mojave.",
        "War never changes, but my sleep schedule does.",
        "Delivering mail and making questionable moral decisions.",
        "The Mojave’s got ghosts. Some of them walk, and some of them talk. I’m one of ‘em.",
        "No map, no plan, just the open road and a debt to settle.",
        "Some people leave printRandomQuotetprints. I leave spent casings and empty Sunset Sarsaparilla bottles.",
        "Not all who wander are lost… but I definitely took a wrong turn near Sloan.",
        "The Mojave’s a tough place, but I’m tougher. Still, I’d rather be in a hotel room in New Vegas than out here with a pack of geckos.",
        "One day, the Mojave will be mine… or at least the Strip.",
        "Just a Courier, but I make it look good.",
        "Running from my problems like a Deathclaw’s chasing me. Spoiler: it’s not working.",
        "Just another Courier trying to make caps and cause chaos.",
        "Head full of lead, pockets full of caps.",
        "Survived a headshot, still making questionable choices.",
        "If you see me in the Mojave, you better be packing.",
        "Walking the Mojave roads…",
        "Still tracking Benny…",
        "One bullet, one job left to do.",
        "Sun’s setting on the Strip.",
        "Just another ghost in the desert.",
    };
    std::atomic<bool> should_print {false};

public:
    void stop();
    void start();

    void printRandomQuote();
};

class Fallout_New_Vegas_References {
private:
    std::vector<std::string> strs {
        "---------------------------------- Fallout_New_Vegas_References --------------------------------------",
        "If you’re reading this, you’ve stumbled into my wasteland. Consider this a warning.",
        "In the Mojave, the real treasure is the journey. But the caps help.",
        "If you hear someone singing ‘Big Iron’ in the distance, it’s probably me.",
        "Somebody’s got to take out the Legion. Might as well be me.",
        "The Mojave teaches you survival, but sometimes it feels like it’s teaching me patience.",
        "The journey’s always better with a little company… if only I could find a good companion.",
        "Finding the beauty in the wasteland, one sunrise at a time.",
        "You only get one life out here. Might as well make it count—unless, of course, you get shot in the head.",
    };
    std::atomic<bool> should_print {false};

public:
    void stop();
    void start();

    void printRandomQuote();
};

bool isNumber(const std::string& str);

void run(Humorous_Wasteland_Struggles& obj1, Mr_New_Vegas_Radio_Themed& obj2, Faction_Themed& obj3, Mojave_Vibes_Courier_Energy& obj4, Fallout_New_Vegas_References& obj5);

void hideInputMode();

void restoreInputMode();

void restoreCursor(int signal);

void PrintContent(Colors ob);

#endif

