#include "../winhttp.h"

//----- (00000001403CC530) ----------------------------------------------------
__int64 __fastcall sub_1403CC530(__int64 a1, unsigned int a2)
{
    __int64 v4; // rbx
    _WORD *v5; // rax
    _WORD *v6; // rcx
    _WORD *v7; // rax
    __int64 v8; // rax
    __int64 (__fastcall **v10)(); // [rsp+30h] [rbp-D0h] BYREF
    char v11[8]; // [rsp+38h] [rbp-C8h] BYREF
    _WORD *v12; // [rsp+40h] [rbp-C0h]
    _WORD *v13; // [rsp+48h] [rbp-B8h]
    __int128 v14; // [rsp+F0h] [rbp-10h]
    _WORD *v15; // [rsp+100h] [rbp+0h]
    char v16[8]; // [rsp+110h] [rbp+10h] BYREF
    __int64 v17; // [rsp+118h] [rbp+18h]

    sub_1400B6F30(&v10);
    v4 = 0i64;
    v15 = 0i64;
    v14 = 0i64;
    v10 = off_140B69230;
    v5 = (_WORD *)sub_14018B280(16i64, 0i64);
    v6 = v5 + 8;
    *(_QWORD *)&v14 = v5;
    *((_QWORD *)&v14 + 1) = v5;
    v15 = v5 + 8;
    if ( v5 )
        *v5 = 0;
    switch ( a2 )
    {
        case 1u:
            v7 = (_WORD *)sub_14034BDD0(v6, 73727i64);
            if ( !v7 )
                goto LABEL_5;
            if ( *v7 )
            {
                do
                    ++v4;
                while ( v7[v4] );
            }
            goto LABEL_9;
        case 2u:
            v7 = (_WORD *)sub_14034BDD0(v6, 73730i64);
            if ( !v7 )
                goto LABEL_5;
            if ( *v7 )
            {
                do
                    ++v4;
                while ( v7[v4] );
            }
            goto LABEL_9;
        case 3u:
            v7 = (_WORD *)sub_14034BDD0(v6, 73732i64);
            if ( !v7 )
                goto LABEL_5;
            if ( *v7 )
            {
                do
                    ++v4;
                while ( v7[v4] );
            }
            goto LABEL_9;
        case 4u:
            v7 = (_WORD *)sub_14034BDD0(v6, 73735i64);
            if ( !v7 )
                goto LABEL_5;
            if ( *v7 )
            {
                do
                    ++v4;
                while ( v7[v4] );
            }
            goto LABEL_9;
        case 5u:
            v7 = (_WORD *)sub_14034BDD0(v6, 73736i64);
            if ( !v7 )
                goto LABEL_5;
            if ( *v7 )
            {
                do
                    ++v4;
                while ( v7[v4] );
            }
            goto LABEL_9;
        case 6u:
        case 0x94u:
        case 0x95u:
        case 0x97u:
        case 0x98u:
        case 0x99u:
            sub_1400B75F0(&v10, 73737i64);
            goto LABEL_232;
        case 0xBu:
            v7 = (_WORD *)sub_14034BDD0(v6, 73739i64);
            if ( !v7 )
                goto LABEL_5;
            if ( *v7 )
            {
                do
                    ++v4;
                while ( v7[v4] );
            }
            goto LABEL_9;
        case 0xDu:
            v7 = (_WORD *)sub_14034BDD0(v6, 73744i64);
            if ( !v7 )
                goto LABEL_5;
            if ( *v7 )
            {
                do
                    ++v4;
                while ( v7[v4] );
            }
            goto LABEL_9;
        case 0xEu:
        case 0x9Eu:
            goto LABEL_232;
        case 0xFu:
            v7 = (_WORD *)sub_14034BDD0(v6, 73746i64);
            if ( !v7 )
                goto LABEL_5;
            if ( *v7 )
            {
                do
                    ++v4;
                while ( v7[v4] );
            }
            goto LABEL_9;
        case 0x10u:
            v7 = (_WORD *)sub_14034BDD0(v6, 73747i64);
            if ( !v7 )
                goto LABEL_5;
            if ( *v7 )
            {
                do
                    ++v4;
                while ( v7[v4] );
            }
            goto LABEL_9;
        case 0x11u:
        case 0x96u:
            sub_1400B75F0(&v10, 73748i64);
            goto LABEL_232;
        case 0x12u:
            v7 = (_WORD *)sub_14034BDD0(v6, 73749i64);
            if ( !v7 )
                goto LABEL_5;
            if ( *v7 )
            {
                do
                    ++v4;
                while ( v7[v4] );
            }
            goto LABEL_9;
        case 0x13u:
            v7 = (_WORD *)sub_14034BDD0(v6, 73750i64);
            if ( !v7 )
                goto LABEL_5;
            if ( *v7 )
            {
                do
                    ++v4;
                while ( v7[v4] );
            }
            goto LABEL_9;
        case 0x14u:
            v7 = (_WORD *)sub_14034BDD0(v6, 73752i64);
            if ( !v7 )
                goto LABEL_5;
            if ( *v7 )
            {
                do
                    ++v4;
                while ( v7[v4] );
            }
            goto LABEL_9;
        case 0x15u:
            v7 = (_WORD *)sub_14034BDD0(v6, 73753i64);
            if ( !v7 )
                goto LABEL_5;
            if ( *v7 )
            {
                do
                    ++v4;
                while ( v7[v4] );
            }
            goto LABEL_9;
        case 0x16u:
            v7 = (_WORD *)sub_14034BDD0(v6, 73754i64);
            if ( !v7 )
                goto LABEL_5;
            if ( *v7 )
            {
                do
                    ++v4;
                while ( v7[v4] );
            }
            goto LABEL_9;
        case 0x17u:
            v7 = (_WORD *)sub_14034BDD0(v6, 73755i64);
            if ( !v7 )
                goto LABEL_5;
            if ( *v7 )
            {
                do
                    ++v4;
                while ( v7[v4] );
            }
            goto LABEL_9;
        case 0x18u:
            v7 = (_WORD *)sub_14034BDD0(v6, 73756i64);
            if ( !v7 )
                goto LABEL_5;
            if ( *v7 )
            {
                do
                    ++v4;
                while ( v7[v4] );
            }
            goto LABEL_9;
        case 0x19u:
            v7 = (_WORD *)sub_14034BDD0(v6, 73800i64);
            if ( !v7 )
                goto LABEL_5;
            if ( *v7 )
            {
                do
                    ++v4;
                while ( v7[v4] );
            }
            goto LABEL_9;
        case 0x1Au:
            v7 = (_WORD *)sub_14034BDD0(v6, 73757i64);
            if ( !v7 )
                goto LABEL_5;
            if ( *v7 )
            {
                do
                    ++v4;
                while ( v7[v4] );
            }
            goto LABEL_9;
        case 0x1Bu:
            v7 = (_WORD *)sub_14034BDD0(v6, 73760i64);
            if ( !v7 )
                goto LABEL_5;
            if ( *v7 )
            {
                do
                    ++v4;
                while ( v7[v4] );
            }
            goto LABEL_9;
        case 0x1Cu:
            sub_1400B75F0(&v10, 73761i64);
            goto LABEL_232;
        case 0x1Du:
            v7 = (_WORD *)sub_14034BDD0(v6, 73763i64);
            if ( !v7 )
                goto LABEL_5;
            if ( *v7 )
            {
                do
                    ++v4;
                while ( v7[v4] );
            }
            goto LABEL_9;
        case 0x1Eu:
            v7 = (_WORD *)sub_14034BDD0(v6, 73767i64);
            if ( !v7 )
                goto LABEL_5;
            if ( *v7 )
            {
                do
                    ++v4;
                while ( v7[v4] );
            }
            goto LABEL_9;
        case 0x1Fu:
            v7 = (_WORD *)sub_14034BDD0(v6, 73769i64);
            if ( !v7 )
                goto LABEL_5;
            if ( *v7 )
            {
                do
                    ++v4;
                while ( v7[v4] );
            }
            goto LABEL_9;
        case 0x20u:
            v7 = (_WORD *)sub_14034BDD0(v6, 73801i64);
            if ( !v7 )
                goto LABEL_5;
            if ( *v7 )
            {
                do
                    ++v4;
                while ( v7[v4] );
            }
            goto LABEL_9;
        case 0x21u:
            v7 = (_WORD *)sub_14034BDD0(v6, 73770i64);
            if ( !v7 )
                goto LABEL_5;
            if ( *v7 )
            {
                do
                    ++v4;
                while ( v7[v4] );
            }
            goto LABEL_9;
        case 0x22u:
            v7 = (_WORD *)sub_14034BDD0(v6, 73771i64);
            if ( !v7 )
                goto LABEL_5;
            if ( *v7 )
            {
                do
                    ++v4;
                while ( v7[v4] );
            }
            goto LABEL_9;
        case 0x23u:
            v7 = (_WORD *)sub_14034BDD0(v6, 73772i64);
            if ( !v7 )
                goto LABEL_5;
            if ( *v7 )
            {
                do
                    ++v4;
                while ( v7[v4] );
            }
            goto LABEL_9;
        case 0x24u:
            v7 = (_WORD *)sub_14034BDD0(v6, 73773i64);
            if ( !v7 )
                goto LABEL_5;
            if ( *v7 )
            {
                do
                    ++v4;
                while ( v7[v4] );
            }
            goto LABEL_9;
        case 0x25u:
            v7 = (_WORD *)sub_14034BDD0(v6, 73774i64);
            if ( !v7 )
                goto LABEL_5;
            if ( *v7 )
            {
                do
                    ++v4;
                while ( v7[v4] );
            }
            goto LABEL_9;
        case 0x26u:
            v7 = (_WORD *)sub_14034BDD0(v6, 73775i64);
            if ( !v7 )
                goto LABEL_5;
            if ( *v7 )
            {
                do
                    ++v4;
                while ( v7[v4] );
            }
            goto LABEL_9;
        case 0x27u:
            v7 = (_WORD *)sub_14034BDD0(v6, 73778i64);
            if ( !v7 )
                goto LABEL_5;
            if ( *v7 )
            {
                do
                    ++v4;
                while ( v7[v4] );
            }
            goto LABEL_9;
        case 0x28u:
            v7 = (_WORD *)sub_14034BDD0(v6, 73779i64);
            if ( !v7 )
                goto LABEL_5;
            if ( *v7 )
            {
                do
                    ++v4;
                while ( v7[v4] );
            }
            goto LABEL_9;
        case 0x29u:
            v7 = (_WORD *)sub_14034BDD0(v6, 73780i64);
            if ( !v7 )
                goto LABEL_5;
            if ( *v7 )
            {
                do
                    ++v4;
                while ( v7[v4] );
            }
            goto LABEL_9;
        case 0x2Au:
            v7 = (_WORD *)sub_14034BDD0(v6, 73781i64);
            if ( !v7 )
                goto LABEL_5;
            if ( *v7 )
            {
                do
                    ++v4;
                while ( v7[v4] );
            }
            goto LABEL_9;
        case 0x2Bu:
            v7 = (_WORD *)sub_14034BDD0(v6, 73804i64);
            if ( !v7 )
                goto LABEL_5;
            if ( *v7 )
            {
                do
                    ++v4;
                while ( v7[v4] );
            }
            goto LABEL_9;
        case 0x2Cu:
            v7 = (_WORD *)sub_14034BDD0(v6, 73805i64);
            if ( !v7 )
                goto LABEL_5;
            if ( *v7 )
            {
                do
                    ++v4;
                while ( v7[v4] );
            }
            goto LABEL_9;
        case 0x2Du:
            v7 = (_WORD *)sub_14034BDD0(v6, 73806i64);
            if ( !v7 )
                goto LABEL_5;
            if ( *v7 )
            {
                do
                    ++v4;
                while ( v7[v4] );
            }
            goto LABEL_9;
        case 0x2Eu:
            sub_1400B75F0(&v10, 73807i64);
            goto LABEL_232;
        case 0x2Fu:
            sub_1400B75F0(&v10, 73808i64);
            goto LABEL_232;
        case 0x30u:
            sub_1400B75F0(&v10, 73809i64);
            goto LABEL_232;
        case 0x31u:
            sub_1400B75F0(&v10, 73810i64);
            goto LABEL_232;
        case 0x32u:
            sub_1400B75F0(&v10, 73811i64);
            goto LABEL_232;
        case 0x33u:
            sub_1400B75F0(&v10, 73916i64);
            goto LABEL_232;
        case 0x34u:
            sub_1400B75F0(&v10, 73922i64);
            goto LABEL_232;
        case 0x35u:
            sub_1400B75F0(&v10, 87983i64);
            goto LABEL_232;
        case 0x36u:
            sub_1400B75F0(&v10, 87984i64);
            goto LABEL_232;
        case 0x39u:
            sub_1400B75F0(&v10, 520696i64);
            goto LABEL_232;
        case 0x3Fu:
            sub_1400B75F0(&v10, 128963i64);
            goto LABEL_232;
        case 0x40u:
            sub_1400B75F0(&v10, 178071i64);
            goto LABEL_232;
        case 0x41u:
            sub_1400B75F0(&v10, 178067i64);
            goto LABEL_232;
        case 0x42u:
            sub_1400B75F0(&v10, 178070i64);
            goto LABEL_232;
        case 0x43u:
            sub_1400B75F0(&v10, 178065i64);
            goto LABEL_232;
        case 0x44u:
            sub_1400B75F0(&v10, 178074i64);
            goto LABEL_232;
        case 0x45u:
            sub_1400B75F0(&v10, 178069i64);
            goto LABEL_232;
        case 0x46u:
            sub_1400B75F0(&v10, 178073i64);
            goto LABEL_232;
        case 0x47u:
            sub_1400B75F0(&v10, 178072i64);
            goto LABEL_232;
        case 0x48u:
            v7 = (_WORD *)sub_14034BDD0(v6, 188102i64);
            if ( !v7 )
                goto LABEL_5;
            if ( *v7 )
            {
                do
                    ++v4;
                while ( v7[v4] );
            }
            goto LABEL_9;
        case 0x4Cu:
            sub_1400B75F0(&v10, 196206i64);
            goto LABEL_232;
        case 0x4Du:
            v7 = (_WORD *)sub_14034BDD0(v6, 408250i64);
            if ( !v7 )
                goto LABEL_5;
            if ( *v7 )
            {
                do
                    ++v4;
                while ( v7[v4] );
            }
            goto LABEL_9;
        case 0x4Eu:
        case 0x6Fu:
            sub_1400B75F0(&v10, 708880i64);
            goto LABEL_232;
        case 0x4Fu:
            sub_1400B75F0(&v10, 256617i64);
            goto LABEL_232;
        case 0x50u:
            sub_1400B75F0(&v10, 708885i64);
            goto LABEL_232;
        case 0x52u:
            sub_1400B75F0(&v10, 238300i64);
            goto LABEL_232;
        case 0x54u:
            sub_1400B75F0(&v10, 622329i64);
            goto LABEL_232;
        case 0x55u:
            sub_1400B75F0(&v10, 276783i64);
            goto LABEL_232;
        case 0x57u:
            sub_1400B75F0(&v10, 307716i64);
            goto LABEL_232;
        case 0x58u:
            sub_1400B75F0(&v10, 341308i64);
            goto LABEL_232;
        case 0x5Bu:
            sub_1400B75F0(&v10, 362049i64);
            goto LABEL_232;
        case 0x5Cu:
            sub_1400B75F0(&v10, 362054i64);
            goto LABEL_232;
        case 0x5Du:
            sub_1400B75F0(&v10, 362055i64);
            goto LABEL_232;
        case 0x67u:
            sub_1400B75F0(&v10, 437058i64);
            goto LABEL_232;
        case 0x6Eu:
            sub_1400B75F0(&v10, 455876i64);
            goto LABEL_232;
        case 0x70u:
            sub_1400B75F0(&v10, 708883i64);
            goto LABEL_232;
        case 0x72u:
            sub_1400B75F0(&v10, 708881i64);
            goto LABEL_232;
        case 0x73u:
            sub_1400B75F0(&v10, 501654i64);
            goto LABEL_232;
        case 0x74u:
            sub_1400B75F0(&v10, 501879i64);
            goto LABEL_232;
        case 0x75u:
            sub_1400B75F0(&v10, 510893i64);
            goto LABEL_232;
        case 0x76u:
            sub_1400B75F0(&v10, 522087i64);
            goto LABEL_232;
        case 0x79u:
            sub_1400B75F0(&v10, 543521i64);
            goto LABEL_232;
        case 0x7Au:
            sub_1400B75F0(&v10, 568247i64);
            goto LABEL_232;
        case 0x7Fu:
            sub_1400B75F0(&v10, 584735i64);
            goto LABEL_232;
        case 0x80u:
            sub_1400B75F0(&v10, 584737i64);
            goto LABEL_232;
        case 0x81u:
            sub_1400B75F0(&v10, 584738i64);
            goto LABEL_232;
        case 0x82u:
            sub_1400B75F0(&v10, 584740i64);
            goto LABEL_232;
        case 0x83u:
            sub_1400B75F0(&v10, 584950i64);
            goto LABEL_232;
        case 0x84u:
            v7 = (_WORD *)sub_14034BDD0(v6, 588745i64);
            if ( v7 )
            {
                if ( *v7 )
                {
                    do
                        ++v4;
                    while ( v7[v4] );
                }
                LABEL_9:
                sub_14001C480(v11, v7, &v7[v4]);
            }
            else
            {
                LABEL_5:
                if ( v12 != v13 )
                {
                    *v12 = 0;
                    v13 = v12;
                }
            }
        LABEL_232:
            sub_1400B7660(&v10);
            Apollo_LUAEvent(*(_QWORD *)(a1 + 29504), "GenericError", "iS", a2);
            if ( (_QWORD)v14 )
                sub_14018B900(v14, 0i64);
            return sub_1400B7390(&v10);
        case 0x85u:
            sub_1400B75F0(&v10, 78723i64);
            goto LABEL_232;
        case 0x87u:
            sub_1400B75F0(&v10, 657175i64);
            goto LABEL_232;
        case 0x88u:
            sub_1400B75F0(&v10, 657176i64);
            goto LABEL_232;
        case 0x89u:
            sub_1400B75F0(&v10, 657177i64);
            goto LABEL_232;
        case 0x8Au:
            sub_1400B75F0(&v10, 657179i64);
            goto LABEL_232;
        case 0x8Bu:
            sub_1400B75F0(&v10, 656690i64);
            goto LABEL_232;
        case 0x8Cu:
            sub_1400B75F0(&v10, 659175i64);
            goto LABEL_232;
        case 0x8Du:
            sub_1400B75F0(&v10, 659183i64);
            goto LABEL_232;
        case 0x8Eu:
            sub_1400B75F0(&v10, 663181i64);
            goto LABEL_232;
        case 0x8Fu:
            sub_1400B75F0(&v10, 659184i64);
            goto LABEL_232;
        case 0x90u:
            sub_1400B75F0(&v10, 676466i64);
            goto LABEL_232;
        case 0x91u:
            sub_1400B75F0(&v10, 682757i64);
            goto LABEL_232;
        case 0x9Au:
            sub_1400B75F0(&v10, 708884i64);
            goto LABEL_232;
        case 0x9Cu:
            sub_1400B75F0(&v10, 731743i64);
            goto LABEL_232;
        case 0x9Du:
            sub_1400B75F0(&v10, 733070i64);
            goto LABEL_232;
        case 0x9Fu:
            sub_1400B75F0(&v10, 741974i64);
            goto LABEL_232;
        case 0xAEu:
            sub_1400B75F0(&v10, 770463i64);
            goto LABEL_232;
        default:
            v8 = sub_14018EFA0(v16, L"(Unlocalized) Unhandled EGenericError Code (%d)", a2);
            if ( (char *)v8 != v11 )
                sub_14001C480(v11, *(_QWORD *)(v8 + 8), *(_QWORD *)(v8 + 16));
            if ( v17 )
                sub_14018B900(v17, 0i64);
            goto LABEL_232;
    }
}