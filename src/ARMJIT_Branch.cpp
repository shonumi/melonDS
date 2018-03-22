/*
    Copyright 2016-2017 StapleButter

    This file is part of melonDS.

    melonDS is free software: you can redistribute it and/or modify it under
    the terms of the GNU General Public License as published by the Free
    Software Foundation, either version 3 of the License, or (at your option)
    any later version.

    melonDS is distributed in the hope that it will be useful, but WITHOUT ANY
    WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
    FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with melonDS. If not, see http://www.gnu.org/licenses/.
*/

#include <stdio.h>
#include "ARM.h"


namespace ARMJIT
{


void A_B(ARM* cpu, u32 pc, u32 instr)
{

}

void A_BL(ARM* cpu, u32 pc, u32 instr)
{

}

void A_BLX_IMM(ARM* cpu, u32 pc, u32 instr)
{

}

void A_BX(ARM* cpu, u32 pc, u32 instr)
{

}

void A_BLX_REG(ARM* cpu, u32 pc, u32 instr)
{

}



void T_BCOND(ARM* cpu, u32 pc, u32 instr)
{

}

void T_BX(ARM* cpu, u32 pc, u32 instr)
{

}

void T_BLX_REG(ARM* cpu, u32 pc, u32 instr)
{
    if (cpu->Num==1)
    {
        printf("!! THUMB BLX_REG ON ARM7\n");
        return;
    }


}

void T_B(ARM* cpu, u32 pc, u32 instr)
{

}

void T_BL_LONG_1(ARM* cpu, u32 pc, u32 instr)
{

}

void T_BL_LONG_2(ARM* cpu, u32 pc, u32 instr)
{

}



}
