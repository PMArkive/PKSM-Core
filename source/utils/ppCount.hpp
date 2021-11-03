/*
 *   This file is part of PKSM-Core
 *   Copyright (C) 2016-2021 Bernardo Giordano, Admiral Fish, piepie62, Pk11
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *   Additional Terms 7.b and 7.c of GPLv3 apply to this file:
 *       * Requiring preservation of specified reasonable legal notices or
 *         author attributions in that material or in the Appropriate Legal
 *         Notices displayed by works containing it.
 *       * Prohibiting misrepresentation of the origin of that material,
 *         or requiring that modified versions of such material be marked in
 *         reasonable ways as different from the original version.
 */

#ifndef PP_COUNT_HPP
#define PP_COUNT_HPP

#include "enums/Move.hpp"
#include "utils/coretypes.h"
#include <array>
#include <utility>

namespace pksm::internal
{
    constexpr std::array<u8, 827> PP_G8 = {
        0,  // None
        35, // Pound
        25, // KarateChop
        10, // DoubleSlap
        15, // CometPunch
        20, // MegaPunch
        20, // PayDay
        15, // FirePunch
        15, // IcePunch
        15, // ThunderPunch
        35, // Scratch
        30, // ViseGrip
        5,  // Guillotine
        10, // RazorWind
        20, // SwordsDance
        30, // Cut
        35, // Gust
        35, // WingAttack
        20, // Whirlwind
        15, // Fly
        20, // Bind
        20, // Slam
        25, // VineWhip
        20, // Stomp
        30, // DoubleKick
        5,  // MegaKick
        10, // JumpKick
        15, // RollingKick
        15, // SandAttack
        15, // Headbutt
        25, // HornAttack
        20, // FuryAttack
        5,  // HornDrill
        35, // Tackle
        15, // BodySlam
        20, // Wrap
        20, // TakeDown
        10, // Thrash
        15, // DoubleEdge
        30, // TailWhip
        35, // PoisonSting
        20, // Twineedle
        20, // PinMissile
        30, // Leer
        25, // Bite
        40, // Growl
        20, // Roar
        15, // Sing
        20, // Supersonic
        20, // SonicBoom
        20, // Disable
        30, // Acid
        25, // Ember
        15, // Flamethrower
        30, // Mist
        25, // WaterGun
        5,  // HydroPump
        15, // Surf
        10, // IceBeam
        5,  // Blizzard
        20, // Psybeam
        20, // BubbleBeam
        20, // AuroraBeam
        5,  // HyperBeam
        35, // Peck
        20, // DrillPeck
        20, // Submission
        20, // LowKick
        20, // Counter
        20, // SeismicToss
        15, // Strength
        25, // Absorb
        15, // MegaDrain
        10, // LeechSeed
        20, // Growth
        25, // RazorLeaf
        10, // SolarBeam
        35, // PoisonPowder
        30, // StunSpore
        15, // SleepPowder
        10, // PetalDance
        40, // StringShot
        10, // DragonRage
        15, // FireSpin
        30, // ThunderShock
        15, // Thunderbolt
        20, // ThunderWave
        10, // Thunder
        15, // RockThrow
        10, // Earthquake
        5,  // Fissure
        10, // Dig
        10, // Toxic
        25, // Confusion
        10, // Psychic
        20, // Hypnosis
        40, // Meditate
        30, // Agility
        30, // QuickAttack
        20, // Rage
        20, // Teleport
        15, // NightShade
        10, // Mimic
        40, // Screech
        15, // DoubleTeam
        10, // Recover
        30, // Harden
        10, // Minimize
        20, // Smokescreen
        10, // ConfuseRay
        40, // Withdraw
        40, // DefenseCurl
        20, // Barrier
        30, // LightScreen
        30, // Haze
        20, // Reflect
        30, // FocusEnergy
        10, // Bide
        10, // Metronome
        20, // MirrorMove
        5,  // SelfDestruct
        10, // EggBomb
        30, // Lick
        20, // Smog
        20, // Sludge
        20, // BoneClub
        5,  // FireBlast
        15, // Waterfall
        15, // Clamp
        20, // Swift
        10, // SkullBash
        15, // SpikeCannon
        35, // Constrict
        20, // Amnesia
        15, // Kinesis
        10, // SoftBoiled
        10, // HighJumpKick
        30, // Glare
        15, // DreamEater
        40, // PoisonGas
        20, // Barrage
        10, // LeechLife
        10, // LovelyKiss
        5,  // SkyAttack
        10, // Transform
        30, // Bubble
        10, // DizzyPunch
        15, // Spore
        20, // Flash
        15, // Psywave
        40, // Splash
        20, // AcidArmor
        10, // Crabhammer
        5,  // Explosion
        15, // FurySwipes
        10, // Bonemerang
        10, // Rest
        10, // RockSlide
        15, // HyperFang
        30, // Sharpen
        30, // Conversion
        10, // TriAttack
        10, // SuperFang
        20, // Slash
        10, // Substitute
        1,  // Struggle
        1,  // Sketch
        10, // TripleKick
        25, // Thief
        10, // SpiderWeb
        5,  // MindReader
        15, // Nightmare
        25, // FlameWheel
        15, // Snore
        10, // Curse
        15, // Flail
        30, // Conversion2
        5,  // Aeroblast
        40, // CottonSpore
        15, // Reversal
        10, // Spite
        25, // PowderSnow
        10, // Protect
        30, // MachPunch
        10, // ScaryFace
        20, // FeintAttack
        10, // SweetKiss
        10, // BellyDrum
        10, // SludgeBomb
        10, // MudSlap
        10, // Octazooka
        20, // Spikes
        5,  // ZapCannon
        40, // Foresight
        5,  // DestinyBond
        5,  // PerishSong
        15, // IcyWind
        5,  // Detect
        10, // BoneRush
        5,  // LockOn
        10, // Outrage
        10, // Sandstorm
        10, // GigaDrain
        10, // Endure
        20, // Charm
        20, // Rollout
        40, // FalseSwipe
        15, // Swagger
        10, // MilkDrink
        20, // Spark
        20, // FuryCutter
        25, // SteelWing
        5,  // MeanLook
        15, // Attract
        10, // SleepTalk
        5,  // HealBell
        20, // Return
        15, // Present
        20, // Frustration
        25, // Safeguard
        20, // PainSplit
        5,  // SacredFire
        30, // Magnitude
        5,  // DynamicPunch
        10, // Megahorn
        20, // DragonBreath
        40, // BatonPass
        5,  // Encore
        20, // Pursuit
        40, // RapidSpin
        20, // SweetScent
        15, // IronTail
        35, // MetalClaw
        10, // VitalThrow
        5,  // MorningSun
        5,  // Synthesis
        5,  // Moonlight
        15, // HiddenPower
        5,  // CrossChop
        20, // Twister
        5,  // RainDance
        5,  // SunnyDay
        15, // Crunch
        20, // MirrorCoat
        10, // PsychUp
        5,  // ExtremeSpeed
        5,  // AncientPower
        15, // ShadowBall
        10, // FutureSight
        15, // RockSmash
        15, // Whirlpool
        10, // BeatUp
        10, // FakeOut
        10, // Uproar
        20, // Stockpile
        10, // SpitUp
        10, // Swallow
        10, // HeatWave
        10, // Hail
        15, // Torment
        15, // Flatter
        15, // WillOWisp
        10, // Memento
        20, // Facade
        20, // FocusPunch
        10, // SmellingSalts
        20, // FollowMe
        20, // NaturePower
        20, // Charge
        20, // Taunt
        20, // HelpingHand
        10, // Trick
        10, // RolePlay
        10, // Wish
        20, // Assist
        20, // Ingrain
        5,  // Superpower
        15, // MagicCoat
        10, // Recycle
        10, // Revenge
        15, // BrickBreak
        10, // Yawn
        20, // KnockOff
        5,  // Endeavor
        5,  // Eruption
        10, // SkillSwap
        10, // Imprison
        20, // Refresh
        5,  // Grudge
        10, // Snatch
        20, // SecretPower
        10, // Dive
        20, // ArmThrust
        20, // Camouflage
        20, // TailGlow
        5,  // LusterPurge
        5,  // MistBall
        15, // FeatherDance
        20, // TeeterDance
        10, // BlazeKick
        15, // MudSport
        20, // IceBall
        15, // NeedleArm
        10, // SlackOff
        10, // HyperVoice
        15, // PoisonFang
        10, // CrushClaw
        5,  // BlastBurn
        5,  // HydroCannon
        10, // MeteorMash
        15, // Astonish
        10, // WeatherBall
        5,  // Aromatherapy
        20, // FakeTears
        25, // AirCutter
        5,  // Overheat
        40, // OdorSleuth
        15, // RockTomb
        5,  // SilverWind
        40, // MetalSound
        15, // GrassWhistle
        20, // Tickle
        20, // CosmicPower
        5,  // WaterSpout
        15, // SignalBeam
        20, // ShadowPunch
        20, // Extrasensory
        15, // SkyUppercut
        15, // SandTomb
        5,  // SheerCold
        10, // MuddyWater
        30, // BulletSeed
        20, // AerialAce
        30, // IcicleSpear
        15, // IronDefense
        5,  // Block
        40, // Howl
        15, // DragonClaw
        5,  // FrenzyPlant
        20, // BulkUp
        5,  // Bounce
        15, // MudShot
        25, // PoisonTail
        25, // Covet
        15, // VoltTackle
        20, // MagicalLeaf
        15, // WaterSport
        20, // CalmMind
        15, // LeafBlade
        20, // DragonDance
        10, // RockBlast
        20, // ShockWave
        20, // WaterPulse
        5,  // DoomDesire
        5,  // PsychoBoost
        10, // Roost
        5,  // Gravity
        40, // MiracleEye
        10, // WakeUpSlap
        10, // HammerArm
        5,  // GyroBall
        10, // HealingWish
        10, // Brine
        15, // NaturalGift
        10, // Feint
        20, // Pluck
        15, // Tailwind
        30, // Acupressure
        10, // MetalBurst
        20, // Uturn
        5,  // CloseCombat
        10, // Payback
        10, // Assurance
        15, // Embargo
        10, // Fling
        10, // PsychoShift
        5,  // TrumpCard
        15, // HealBlock
        5,  // WringOut
        10, // PowerTrick
        10, // GastroAcid
        30, // LuckyChant
        20, // MeFirst
        20, // Copycat
        10, // PowerSwap
        10, // GuardSwap
        5,  // Punishment
        5,  // LastResort
        10, // WorrySeed
        5,  // SuckerPunch
        20, // ToxicSpikes
        10, // HeartSwap
        20, // AquaRing
        10, // MagnetRise
        15, // FlareBlitz
        10, // ForcePalm
        20, // AuraSphere
        20, // RockPolish
        20, // PoisonJab
        15, // DarkPulse
        15, // NightSlash
        10, // AquaTail
        15, // SeedBomb
        15, // AirSlash
        15, // XScissor
        10, // BugBuzz
        10, // DragonPulse
        10, // DragonRush
        20, // PowerGem
        10, // DrainPunch
        30, // VacuumWave
        5,  // FocusBlast
        10, // EnergyBall
        15, // BraveBird
        10, // EarthPower
        10, // Switcheroo
        5,  // GigaImpact
        20, // NastyPlot
        30, // BulletPunch
        10, // Avalanche
        30, // IceShard
        15, // ShadowClaw
        15, // ThunderFang
        15, // IceFang
        15, // FireFang
        30, // ShadowSneak
        10, // MudBomb
        20, // PsychoCut
        15, // ZenHeadbutt
        10, // MirrorShot
        10, // FlashCannon
        20, // RockClimb
        15, // Defog
        5,  // TrickRoom
        5,  // DracoMeteor
        15, // Discharge
        15, // LavaPlume
        5,  // LeafStorm
        10, // PowerWhip
        5,  // RockWrecker
        20, // CrossPoison
        5,  // GunkShot
        15, // IronHead
        20, // MagnetBomb
        5,  // StoneEdge
        20, // Captivate
        20, // StealthRock
        20, // GrassKnot
        20, // Chatter
        10, // Judgment
        20, // BugBite
        10, // ChargeBeam
        15, // WoodHammer
        20, // AquaJet
        15, // AttackOrder
        10, // DefendOrder
        10, // HealOrder
        5,  // HeadSmash
        10, // DoubleHit
        5,  // RoarofTime
        5,  // SpacialRend
        10, // LunarDance
        5,  // CrushGrip
        5,  // MagmaStorm
        10, // DarkVoid
        5,  // SeedFlare
        5,  // OminousWind
        5,  // ShadowForce
        15, // HoneClaws
        10, // WideGuard
        10, // GuardSplit
        10, // PowerSplit
        10, // WonderRoom
        10, // Psyshock
        10, // Venoshock
        15, // Autotomize
        20, // RagePowder
        15, // Telekinesis
        10, // MagicRoom
        15, // SmackDown
        10, // StormThrow
        15, // FlameBurst
        10, // SludgeWave
        20, // QuiverDance
        10, // HeavySlam
        10, // Synchronoise
        10, // ElectroBall
        20, // Soak
        20, // FlameCharge
        20, // Coil
        20, // LowSweep
        20, // AcidSpray
        15, // FoulPlay
        15, // SimpleBeam
        15, // Entrainment
        15, // AfterYou
        15, // Round
        15, // EchoedVoice
        20, // ChipAway
        15, // ClearSmog
        10, // StoredPower
        15, // QuickGuard
        15, // AllySwitch
        15, // Scald
        15, // ShellSmash
        10, // HealPulse
        10, // Hex
        10, // SkyDrop
        10, // ShiftGear
        10, // CircleThrow
        15, // Incinerate
        15, // Quash
        15, // Acrobatics
        15, // ReflectType
        5,  // Retaliate
        5,  // FinalGambit
        15, // Bestow
        5,  // Inferno
        10, // WaterPledge
        10, // FirePledge
        10, // GrassPledge
        20, // VoltSwitch
        20, // StruggleBug
        20, // Bulldoze
        10, // FrostBreath
        10, // DragonTail
        30, // WorkUp
        15, // Electroweb
        15, // WildCharge
        10, // DrillRun
        15, // DualChop
        25, // HeartStamp
        10, // HornLeech
        15, // SacredSword
        10, // RazorShell
        10, // HeatCrash
        10, // LeafTornado
        20, // Steamroller
        10, // CottonGuard
        10, // NightDaze
        10, // Psystrike
        10, // TailSlap
        10, // Hurricane
        15, // HeadCharge
        15, // GearGrind
        5,  // SearingShot
        5,  // TechnoBlast
        10, // RelicSong
        10, // SecretSword
        10, // Glaciate
        5,  // BoltStrike
        5,  // BlueFlare
        10, // FieryDance
        5,  // FreezeShock
        5,  // IceBurn
        15, // Snarl
        10, // IcicleCrash
        5,  // Vcreate
        5,  // FusionFlare
        5,  // FusionBolt
        10, // FlyingPress
        10, // MatBlock
        10, // Belch
        10, // Rototiller
        20, // StickyWeb
        25, // FellStinger
        10, // PhantomForce
        20, // TrickorTreat
        30, // NobleRoar
        25, // IonDeluge
        20, // ParabolicCharge
        20, // ForestsCurse
        15, // PetalBlizzard
        20, // FreezeDry
        15, // DisarmingVoice
        20, // PartingShot
        20, // TopsyTurvy
        10, // DrainingKiss
        10, // CraftyShield
        10, // FlowerShield
        10, // GrassyTerrain
        10, // MistyTerrain
        20, // Electrify
        10, // PlayRough
        30, // FairyWind
        15, // Moonblast
        10, // Boomburst
        10, // FairyLock
        10, // KingsShield
        20, // PlayNice
        20, // Confide
        5,  // DiamondStorm
        5,  // SteamEruption
        5,  // HyperspaceHole
        20, // WaterShuriken
        10, // MysticalFire
        10, // SpikyShield
        20, // AromaticMist
        15, // EerieImpulse
        20, // VenomDrench
        20, // Powder
        10, // Geomancy
        20, // MagneticFlux
        30, // HappyHour
        10, // ElectricTerrain
        10, // DazzlingGleam
        40, // Celebrate
        40, // HoldHands
        30, // BabyDollEyes
        20, // Nuzzle
        40, // HoldBack
        20, // Infestation
        20, // PowerUpPunch
        10, // OblivionWing
        10, // ThousandArrows
        10, // ThousandWaves
        10, // LandsWrath
        5,  // LightofRuin
        10, // OriginPulse
        10, // PrecipiceBlades
        5,  // DragonAscent
        5,  // HyperspaceFury
        1,  // BreakneckBlitz
        1,  // BreakneckBlitz
        1,  // AllOutPummeling
        1,  // AllOutPummeling
        1,  // SupersonicSkystrike
        1,  // SupersonicSkystrike
        1,  // AcidDownpour
        1,  // AcidDownpour
        1,  // TectonicRage
        1,  // TectonicRage
        1,  // ContinentalCrush
        1,  // ContinentalCrush
        1,  // SavageSpinOut
        1,  // SavageSpinOut
        1,  // NeverEndingNightmare
        1,  // NeverEndingNightmare
        1,  // CorkscrewCrash
        1,  // CorkscrewCrash
        1,  // InfernoOverdrive
        1,  // InfernoOverdrive
        1,  // HydroVortex
        1,  // HydroVortex
        1,  // BloomDoom
        1,  // BloomDoom
        1,  // GigavoltHavoc
        1,  // GigavoltHavoc
        1,  // ShatteredPsyche
        1,  // ShatteredPsyche
        1,  // SubzeroSlammer
        1,  // SubzeroSlammer
        1,  // DevastatingDrake
        1,  // DevastatingDrake
        1,  // BlackHoleEclipse
        1,  // BlackHoleEclipse
        1,  // TwinkleTackle
        1,  // TwinkleTackle
        1,  // Catastropika
        10, // ShoreUp
        10, // FirstImpression
        10, // BanefulBunker
        10, // SpiritShackle
        10, // DarkestLariat
        10, // SparklingAria
        10, // IceHammer
        10, // FloralHealing
        10, // HighHorsepower
        10, // StrengthSap
        10, // SolarBlade
        40, // Leafage
        15, // Spotlight
        20, // ToxicThread
        30, // LaserFocus
        20, // GearUp
        15, // ThroatChop
        15, // PollenPuff
        20, // AnchorShot
        10, // PsychicTerrain
        15, // Lunge
        15, // FireLash
        10, // PowerTrip
        5,  // BurnUp
        10, // SpeedSwap
        10, // SmartStrike
        20, // Purify
        15, // RevelationDance
        10, // CoreEnforcer
        15, // TropKick
        15, // Instruct
        15, // BeakBlast
        5,  // ClangingScales
        15, // DragonHammer
        20, // BrutalSwing
        20, // AuroraVeil
        1,  // SinisterArrowRaid
        1,  // MaliciousMoonsault
        1,  // OceanicOperetta
        1,  // GuardianofAlola
        1,  // SoulStealing7StarStrike
        1,  // StokedSparksurfer
        1,  // PulverizingPancake
        1,  // ExtremeEvoboost
        1,  // GenesisSupernova
        5,  // ShellTrap
        5,  // FleurCannon
        10, // PsychicFangs
        10, // StompingTantrum
        10, // ShadowBone
        20, // Accelerock
        10, // Liquidation
        10, // PrismaticLaser
        10, // SpectralThief
        5,  // SunsteelStrike
        5,  // MoongeistBeam
        20, // TearfulLook
        10, // ZingZap
        10, // NaturesMadness
        10, // MultiAttack
        1,  // TenMillionVoltThunderbolt
        5,  // MindBlown
        15, // PlasmaFists
        5,  // PhotonGeyser
        1,  // LightThatBurnstheSky
        1,  // SearingSunrazeSmash
        1,  // MenacingMoonrazeMaelstrom
        1,  // LetsSnuggleForever
        1,  // SplinteredStormshards
        1,  // ClangorousSoulblaze
        10, // ZippyZap
        15, // SplishySplash
        15, // FloatyFall
        20, // PikaPapow
        20, // BouncyBubble
        20, // BuzzyBuzz
        20, // SizzlySlide
        15, // GlitzyGlow
        15, // BaddyBad
        10, // SappySeed
        10, // FreezyFrost
        5,  // SparklySwirl
        20, // VeeveeVolley
        5,  // DoubleIronBash
        10, // MaxGuard
        5,  // DynamaxCannon
        15, // SnipeShot
        10, // JawLock
        10, // StuffCheeks
        5,  // NoRetreat
        15, // TarShot
        20, // MagicPowder
        10, // DragonDarts
        10, // Teatime
        15, // Octolock
        10, // BoltBeak
        10, // FishiousRend
        10, // CourtChange
        10, // MaxFlare
        10, // MaxFlutterby
        10, // MaxLightning
        10, // MaxStrike
        10, // MaxKnuckle
        10, // MaxPhantasm
        10, // MaxHailstorm
        10, // MaxOoze
        10, // MaxGeyser
        10, // MaxAirstream
        10, // MaxStarfall
        10, // MaxWyrmwind
        10, // MaxMindstorm
        10, // MaxRockfall
        10, // MaxQuake
        10, // MaxDarkness
        10, // MaxOvergrowth
        10, // MaxSteelspike
        5,  // ClangorousSoul
        10, // BodyPress
        15, // Decorate
        10, // DrumBeating
        15, // SnapTrap
        5,  // PyroBall
        5,  // BehemothBlade
        5,  // BehemothBash
        10, // AuraWheel
        15, // BreakingSwipe
        40, // BranchPoke
        10, // Overdrive
        10, // AppleAcid
        10, // GravApple
        15, // SpiritBreak
        10, // StrangeSteam
        10, // LifeDew
        10, // Obstruct
        10, // FalseSurrender
        5,  // MeteorAssault
        5,  // Eternabeam
        5,  // SteelBeam
        10, // ExpandingForce
        5,  // SteelRoller
        20, // ScaleShot
        10, // MeteorBeam
        10, // ShellSideArm
        5,  // MistyExplosion
        20, // GrassyGlide
        20, // RisingVoltage
        10, // TerrainPulse
        10, // SkitterSmack
        5,  // BurningJealousy
        5,  // LashOut
        5,  // Poltergeist
        40, // CorrosiveGas
        10, // Coaching
        20, // FlipTurn
        10, // TripleAxel
        10, // DualWingbeat
        10, // ScorchingSands
        10, // JungleHealing
        5,  // WickedBlow
        5,  // SurgingStrikes
        15, // ThunderCage
        5,  // DragonEnergy
        10, // FreezingGlare
        10, // FieryWrath
        10, // ThunderousKick
        5,  // GlacialLance
        5,  // AstralBarrage
        5,  // EerieSpell
    };

    constexpr std::array<std::pair<pksm::Move, u8>, 9> PPDiff_LGPE = {{{pksm::Move::Absorb, 15},
        {pksm::Move::MegaDrain, 10}, {pksm::Move::ZippyZap, 15}, {pksm::Move::BouncyBubble, 15},
        {pksm::Move::BuzzyBuzz, 15}, {pksm::Move::SizzlySlide, 15}, {pksm::Move::SappySeed, 15},
        {pksm::Move::FreezyFrost, 15}, {pksm::Move::SparklySwirl, 15}}};

    // No differences between SM and SWSH

    constexpr std::array<std::pair<pksm::Move, u8>, 3> PPDiff_G6 = {{{pksm::Move::Submission, 25},
        {pksm::Move::LeechLife, 15}, {pksm::Move::Synchronoise, 15}}};

    constexpr std::array<std::pair<pksm::Move, u8>, 18> PPDiff_G5 = {{{pksm::Move::SwordsDance, 30},
        {pksm::Move::VineWhip, 15}, {pksm::Move::JumpKick, 25}, {pksm::Move::Submission, 25},
        {pksm::Move::Growth, 40}, {pksm::Move::Minimize, 20}, {pksm::Move::Barrier, 30},
        {pksm::Move::SkullBash, 15}, {pksm::Move::LeechLife, 15}, {pksm::Move::AcidArmor, 40},
        {pksm::Move::Thief, 10}, {pksm::Move::RockTomb, 10}, {pksm::Move::Extrasensory, 30},
        {pksm::Move::Covet, 40}, {pksm::Move::Tailwind, 30}, {pksm::Move::AirSlash, 20},
        {pksm::Move::Synchronoise, 15}, {pksm::Move::SacredSword, 20}}};

    constexpr std::array<std::pair<pksm::Move, u8>, 23> PPDiff_G4 = {
        {{pksm::Move::SwordsDance, 30}, {pksm::Move::VineWhip, 15}, {pksm::Move::JumpKick, 25},
            {pksm::Move::Thrash, 20}, {pksm::Move::Submission, 25}, {pksm::Move::Growth, 40},
            {pksm::Move::PetalDance, 20}, {pksm::Move::Minimize, 20}, {pksm::Move::Barrier, 30},
            {pksm::Move::Clamp, 10}, {pksm::Move::SkullBash, 15}, {pksm::Move::HighJumpKick, 20},
            {pksm::Move::LeechLife, 15}, {pksm::Move::AcidArmor, 40}, {pksm::Move::Thief, 10},
            {pksm::Move::Outrage, 15}, {pksm::Move::FutureSight, 15}, {pksm::Move::RockTomb, 10},
            {pksm::Move::Extrasensory, 30}, {pksm::Move::Covet, 40}, {pksm::Move::Tailwind, 30},
            {pksm::Move::AirSlash, 20}, {pksm::Move::DrainPunch, 5}}};

    // no pp difference in Gen I and II moves until Gen IV
    constexpr std::array<std::pair<pksm::Move, u8>, 25> PPDiff_G123 = {
        {{pksm::Move::SwordsDance, 30}, {pksm::Move::VineWhip, 15}, {pksm::Move::JumpKick, 25},
            {pksm::Move::Thrash, 20}, {pksm::Move::Submission, 25}, {pksm::Move::Absorb, 20},
            {pksm::Move::MegaDrain, 10}, {pksm::Move::Growth, 40}, {pksm::Move::PetalDance, 20},
            {pksm::Move::Recover, 20}, {pksm::Move::Minimize, 20}, {pksm::Move::Barrier, 30},
            {pksm::Move::Clamp, 10}, {pksm::Move::SkullBash, 15}, {pksm::Move::HighJumpKick, 20},
            {pksm::Move::LeechLife, 15}, {pksm::Move::AcidArmor, 40}, {pksm::Move::Thief, 10},
            {pksm::Move::Outrage, 15}, {pksm::Move::GigaDrain, 5}, {pksm::Move::FutureSight, 15},
            {pksm::Move::Stockpile, 10}, {pksm::Move::RockTomb, 10}, {pksm::Move::Extrasensory, 30},
            {pksm::Move::Covet, 40}}};
}

#endif
