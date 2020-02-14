/*
 *   This file is part of PKSM-Core
 *   Copyright (C) 2016-2020 Bernardo Giordano, Admiral Fish, piepie62
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

#ifndef PB7_HPP
#define PB7_HPP

#include "personal/personal.hpp"
#include "pkx/PKX.hpp"

class PB7 : public PKX
{
protected:
    static constexpr u16 hyperTrainLookup[6] = {0, 1, 2, 5, 3, 4};

    void shuffleArray(u8 sv) override;
    void crypt(void) override;

public:
    static constexpr size_t BOX_LENGTH           = 232;
    static constexpr size_t PARTY_LENGTH         = 260;
    static constexpr size_t FORMAT_SPECIES_LIMIT = 809;

    PB7(PrivateConstructor, u8* dt, bool party = true, bool directAccess = false);
    virtual ~PB7() {}

    std::string extension() const override { return ".pb7"; }

    // std::unique_ptr<PK3> convertToG3(Sav& save) const override;
    // std::unique_ptr<PK4> convertToG4(Sav& save) const override;
    // std::unique_ptr<PK5> convertToG5(Sav& save) const override;
    // std::unique_ptr<PK6> convertToG6(Sav& save) const override;
    // std::unique_ptr<PK7> convertToG7(Sav& save) const override;
    // std::unique_ptr<PK8> convertToG8(Sav& save) const override;

    std::unique_ptr<PKX> clone(void) const override;

    Generation generation() const override;
    bool isEncrypted() const override;
    bool isParty(void) const override { return getLength() == PARTY_LENGTH; }

    u32 encryptionConstant(void) const override;
    void encryptionConstant(u32 v) override;
    u16 sanity(void) const override;
    void sanity(u16 v) override;
    u16 checksum(void) const override;
    void checksum(u16 v) override;
    u16 species(void) const override;
    void species(u16 v) override;
    u16 heldItem(void) const override;
    void heldItem(u16 v) override;
    u16 TID(void) const override;
    void TID(u16 v) override;
    u16 SID(void) const override;
    void SID(u16 v) override;
    u32 experience(void) const override;
    void experience(u32 v) override;
    u16 ability(void) const override;
    void ability(u16 v) override;
    u8 abilityNumber(void) const override;
    void abilityNumber(u8 v) override;
    void setAbility(u8 abilityNumber) override;
    u16 markValue(void) const override;
    void markValue(u16 v) override;
    u32 PID(void) const override;
    void PID(u32 v) override;
    u8 nature(void) const override;
    void nature(u8 v) override;
    bool fatefulEncounter(void) const override;
    void fatefulEncounter(bool v) override;
    u8 gender(void) const override;
    void gender(u8 g) override;
    u16 alternativeForm(void) const override;
    void alternativeForm(u16 v) override;
    u8 ev(Stat ev) const override;
    void ev(Stat ev, u8 v) override;
    // Stubbed; data no longer exists
    u8 contest(u8) const override { return 0; }
    void contest(u8, u8) override {}
    // Replaced by
    u8 awakened(Stat stat) const;
    void awakened(Stat stat, u8 v);

    u8 pelagoEventStatus(void) const;
    void pelagoEventStatus(u8 v);

    u8 pkrs(void) const override;
    void pkrs(u8 v) override;
    u8 pkrsDays(void) const override;
    void pkrsDays(u8 v) override;
    u8 pkrsStrain(void) const override;
    void pkrsStrain(u8 v) override;
    bool hasRibbon(Ribbon) const override { return false; }
    bool ribbon(Ribbon) const override { return false; }
    void ribbon(Ribbon, bool) override {}

    std::string nickname(void) const override;
    void nickname(const std::string& v) override;
    u16 move(u8 move) const override;
    void move(u8 move, u16 v) override;
    u8 PP(u8 move) const override;
    void PP(u8 move, u8 v) override;
    u8 PPUp(u8 move) const override;
    void PPUp(u8 move, u8 v) override;
    u16 relearnMove(u8 move) const override;
    void relearnMove(u8 move, u16 v) override;
    u8 iv(Stat iv) const override;
    void iv(Stat iv, u8 v) override;

    bool egg(void) const override;
    void egg(bool v) override;
    bool nicknamed(void) const override;
    void nicknamed(bool v) override;

    std::string htName(void) const;
    void htName(const std::string& v);
    u8 htGender(void) const;
    void htGender(u8 v);
    u8 currentHandler(void) const override;
    void currentHandler(u8 v) override;
    u8 geoRegion(u8 region) const;
    void geoRegion(u8 region, u8 v);
    u8 geoCountry(u8 country) const;
    void geoCountry(u8 country, u8 v);
    u8 htFriendship(void) const;
    void htFriendship(u8 v);
    u8 htAffection(void) const;
    void htAffection(u8 v);
    u8 htIntensity(void) const;
    void htIntensity(u8 v);
    u8 htMemory(void) const;
    void htMemory(u8 v);
    u8 htFeeling(void) const;
    void htFeeling(u8 v);
    u16 htTextVar(void) const;
    void htTextVar(u16 v);
    u8 fullness(void) const;
    void fullness(u8 v);
    u8 enjoyment(void) const;
    void enjoyment(u8 v);

    std::string otName(void) const override;
    void otName(const std::string& v) override;
    u8 otFriendship(void) const override;
    void otFriendship(u8 v) override;
    u8 otAffection(void) const;
    void otAffection(u8 v);
    u8 otIntensity(void) const;
    void otIntensity(u8 v);
    u8 otMemory(void) const;
    void otMemory(u8 v);
    u16 otTextVar(void) const;
    void otTextVar(u16 v);
    u8 otFeeling(void) const;
    void otFeeling(u8 v);
    u8 eggYear(void) const override;
    void eggYear(u8 v) override;
    u8 eggMonth(void) const override;
    void eggMonth(u8 v) override;
    u8 eggDay(void) const override;
    void eggDay(u8 v) override;
    u8 metYear(void) const override;
    void metYear(u8 v) override;
    u8 metMonth(void) const override;
    void metMonth(u8 v) override;
    u8 metDay(void) const override;
    void metDay(u8 v) override;
    u16 eggLocation(void) const override;
    void eggLocation(u16 v) override;
    u16 metLocation(void) const override;
    void metLocation(u16 v) override;
    u8 ball(void) const override;
    void ball(u8 v) override;
    u8 metLevel(void) const override;
    void metLevel(u8 v) override;
    u8 otGender(void) const override;
    void otGender(u8 v) override;

    bool hyperTrain(u8 num) const;
    void hyperTrain(u8 num, bool v);

    u8 version(void) const override;
    void version(u8 v) override;
    u8 country(void) const;
    void country(u8 v);
    u8 region(void) const;
    void region(u8 v);
    u8 consoleRegion(void) const;
    void consoleRegion(u8 v);
    Language language(void) const override;
    void language(Language v) override;

    u8 currentFriendship(void) const override;
    void currentFriendship(u8 v) override;
    u8 oppositeFriendship(void) const;
    void oppositeFriendship(u8 v);
    void refreshChecksum(void) override;
    u8 hpType(void) const override;
    void hpType(u8 v) override;
    u16 TSV(void) const override;
    u16 PSV(void) const override;
    u8 level(void) const override;
    void level(u8 v) override;
    bool shiny(void) const override;
    void shiny(bool v) override;
    u16 formSpecies(void) const override;
    u16 stat(Stat stat) const override;
    u16 CP(void) const;

    int partyCurrHP(void) const override;
    void partyCurrHP(u16 v) override;
    int partyStat(Stat stat) const override;
    void partyStat(Stat stat, u16 v) override;
    int partyLevel(void) const override;
    void partyLevel(u8 v) override;
    u16 partyCP(void) const;
    void partyCP(u16 v);
    void updatePartyData(void) override;

    u8 height(void) const;
    void height(u8 v);
    u8 weight(void) const;
    void weight(u8 v);

    inline u8 baseHP(void) const override { return PersonalLGPE::baseHP(formSpecies()); }
    inline u8 baseAtk(void) const override { return PersonalLGPE::baseAtk(formSpecies()); }
    inline u8 baseDef(void) const override { return PersonalLGPE::baseDef(formSpecies()); }
    inline u8 baseSpe(void) const override { return PersonalLGPE::baseSpe(formSpecies()); }
    inline u8 baseSpa(void) const override { return PersonalLGPE::baseSpa(formSpecies()); }
    inline u8 baseSpd(void) const override { return PersonalLGPE::baseSpd(formSpecies()); }
    inline u8 type1(void) const override { return PersonalLGPE::type1(formSpecies()); }
    inline u8 type2(void) const override { return PersonalLGPE::type2(formSpecies()); }
    inline u8 genderType(void) const override { return PersonalLGPE::gender(formSpecies()); }
    inline u8 baseFriendship(void) const override { return PersonalLGPE::baseFriendship(formSpecies()); }
    inline u8 expType(void) const override { return PersonalLGPE::expType(formSpecies()); }
    inline u16 abilities(u8 n) const override { return PersonalLGPE::ability(formSpecies(), n); }
    inline u16 formStatIndex(void) const override { return PersonalLGPE::formStatIndex(formSpecies()); }
};

#endif
