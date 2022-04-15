#include "../winhttp.h"

//----- (0000000140412FD0) ----------------------------------------------------
__int64 __fastcall sub_140412FD0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rdx
	__int64 result; // rax
	unsigned int v5; // edx
	__int64* v6; // rax
	__int64 v7; // r8
	unsigned __int64 v8; // rax
	unsigned __int64 v9; // rax
	unsigned int v10; // ecx
	char v11; // al
	char v12; // al
	char v13; // al
	char v14; // al
	char v15; // al
	char v16; // al
	char v17; // al
	char v18; // al
	char v19; // al
	int* v20; // rdx
	__int64 v21; // rcx
	__int64 v22; // rax
	__int128 v23; // xmm0
	__int128 v24; // xmm1
	__int128 v25; // xmm0
	__int128 v26; // xmm1
	__int128 v27; // xmm0
	__int128 v28; // xmm1
	__int128 v29; // xmm0
	__int128 v30; // xmm1
	__int128 v31; // xmm1
	__int128 v32; // xmm0
	__int64* v33; // rdx
	int* v34; // rcx
	__int128 v35; // xmm0
	__int128 v36; // xmm1
	__int128 v37; // xmm0
	__int128 v38; // xmm1
	__int128 v39; // xmm0
	__int128 v40; // xmm1
	__int128 v41; // xmm0
	__int128 v42; // xmm1
	unsigned int v43; // eax
	__int64 v44; // rcx
	int v45[8]; // [rsp+30h] [rbp-D0h] BYREF
	__int64 v46; // [rsp+50h] [rbp-B0h] BYREF
	int v47; // [rsp+58h] [rbp-A8h]
	unsigned int v48; // [rsp+60h] [rbp-A0h] BYREF
	unsigned int v49; // [rsp+64h] [rbp-9Ch]
	__int64 v50; // [rsp+68h] [rbp-98h]
	__int64(__fastcall * *v51)(); // [rsp+70h] [rbp-90h] BYREF
	int v52; // [rsp+78h] [rbp-88h]
	__int64 v53; // [rsp+80h] [rbp-80h]
	__int64 v54; // [rsp+88h] [rbp-78h]
	__int64 v55; // [rsp+90h] [rbp-70h]
	__int64 v56; // [rsp+98h] [rbp-68h]
	__int64 v57; // [rsp+A0h] [rbp-60h]
	__int64 v58; // [rsp+A8h] [rbp-58h]
	__int64 v59; // [rsp+B0h] [rbp-50h]
	int v60; // [rsp+B8h] [rbp-48h]
	__int128 v61; // [rsp+C0h] [rbp-40h]
	int v62; // [rsp+D0h] [rbp-30h]
	__int64 v63; // [rsp+D8h] [rbp-28h]
	unsigned int* v64; // [rsp+E0h] [rbp-20h]
	__int64 v65; // [rsp+ECh] [rbp-14h]
	int v66; // [rsp+F4h] [rbp-Ch]
	__int64 v67; // [rsp+F8h] [rbp-8h]
	__int64 v68; // [rsp+100h] [rbp+0h]
	__int64 v69; // [rsp+108h] [rbp+8h]
	__int128 v70; // [rsp+110h] [rbp+10h]
	__int64 v71; // [rsp+120h] [rbp+20h]
	int v72; // [rsp+13Ch] [rbp+3Ch]
	__int64 v73; // [rsp+188h] [rbp+88h]
	__int64 v74; // [rsp+190h] [rbp+90h]
	__int64 v75; // [rsp+198h] [rbp+98h]
	__int64 v76; // [rsp+1A0h] [rbp+A0h]
	__int64 v77; // [rsp+1A8h] [rbp+A8h]
	__int64 v78[7]; // [rsp+1E0h] [rbp+E0h] BYREF
	int v79; // [rsp+218h] [rbp+118h]
	int v80[80]; // [rsp+370h] [rbp+270h] BYREF

	v2 = *(_QWORD*)a1;
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)a1 = 0i64;
	}
	v3 = *(_QWORD*)(a1 + 1064);
	*(_QWORD*)(a1 + 1204) = 0i64;
	sub_140412470(a1, v3, 0, 3);
	if (*(_QWORD*)(a1 + 1072)
		|| *(_DWORD*)(a1 + 1080)
		|| (result = *(_QWORD*)(a1 + 1064), (*(_DWORD*)(result + 332) & 0x100000) != 0))
	{
		v5 = *(_DWORD*)(a1 + 1084);
		v51 = off_140B66A40;
		v61 = 0i64;
		v70 = 0i64;
		v52 = 0;
		v53 = 0i64;
		v66 = 1;
		v54 = 1i64;
		v55 = 0i64;
		v56 = 0i64;
		v57 = 0i64;
		v58 = 0i64;
		v59 = 0i64;
		v60 = 0;
		v62 = 0;
		v63 = 0i64;
		v64 = 0i64;
		v65 = 0i64;
		v67 = 0i64;
		v68 = 0i64;
		v69 = 0i64;
		v71 = 0i64;
		v72 = 0;
		v73 = 0i64;
		v74 = 0i64;
		v75 = 0i64;
		v76 = 0i64;
		v77 = 0i64;
		v6 = (__int64*)sub_140445320(v45, v5);
		v7 = *(_QWORD*)(a1 + 1064);
		v53 = v7;
		v54 = *v6;
		v55 = v6[1];
		v56 = v6[2];
		v57 = v6[3];
		v46 = 0i64;
		v47 = 0;
		v8 = *(_QWORD*)(a1 + 1072);
		if (v8)
		{
			LOBYTE(v46) = *(_QWORD*)(a1 + 1072);
			v9 = v8 >> 8;
			BYTE1(v46) = v9;
			v9 >>= 8;
			BYTE2(v46) = v9;
			v9 >>= 8;
			BYTE3(v46) = v9;
			v9 >>= 8;
			BYTE4(v46) = v9;
			v9 >>= 8;
			BYTE5(v46) = v9;
			v9 >>= 8;
			BYTE6(v46) = v9;
			v47 = BYTE1(v9);
		}
		else
		{
			v46 = 0i64;
			v47 = 1;
			if (v7 && (unsigned int)(*(_DWORD*)(v7 + 320) - 1) <= 1)
				v47 = 0;
		}
		v10 = *(_DWORD*)(a1 + 1080);
		v58 = 0i64;
		*((_QWORD*)&v61 + 1) = &v46;
		v62 = 0;
		WORD1(v50) = 0;
		v11 = v10 & 7;
		v10 >>= 3;
		v63 = 0i64;
		BYTE1(v50) = v11;
		v12 = v10;
		v10 >>= 3;
		LOBYTE(v50) = v12 & 7;
		v13 = v10;
		v10 >>= 1;
		HIDWORD(v50) = v13 & 1;
		v14 = v10;
		v10 >>= 3;
		LOBYTE(v48) = v14 & 7;
		v15 = v10;
		v10 >>= 3;
		BYTE1(v48) = v15 & 7;
		v16 = v10;
		v10 >>= 3;
		BYTE2(v48) = v16 & 7;
		v17 = v10;
		v10 >>= 3;
		HIBYTE(v48) = v17 & 7;
		v18 = v10;
		v10 >>= 3;
		LOBYTE(v49) = v18 & 7;
		v19 = v10;
		v10 >>= 3;
		BYTE1(v49) = v19 & 7;
		BYTE2(v49) = v10 & 7;
		HIBYTE(v49) = (v10 >> 3) & 7;
		v64 = &v48;
		sub_1400B52A0((__int64)v80);
		sub_1407E4830((int*)v78, 0i64, 0x190ui64);
		sub_1407E4830((int*)v78, 0i64, 0x90ui64);
		v78[0] = 0xC5000000C5i64;
		v78[1] = 0xC5000000C5i64;
		v78[2] = 0xC5000000C5i64;
		v78[3] = 0xC5000000C5i64;
		v78[4] = 0xC5000000C5i64;
		v78[5] = 0xC5000000C5i64;
		v78[6] = 0xC5000000C5i64;
		v79 = 197;
		result = sub_14040C310((__int64)&v51, (__int64)v80, qword_140C658F0, (__int64)v78, 0i64, 0i64);
		if (*(int*)(a1 + 1176) <= 3)
		{
			v20 = v80;
			v21 = a1 + 32;
			if ((((unsigned __int8)(a1 + 32) | (unsigned __int8)v80) & 0xF) != 0)
			{
				result = (__int64)sub_1407DB590((int*)v21, v80, 0x138ui64);
			}
			else
			{
				v22 = 2i64;
				do
				{
					v23 = *(_OWORD*)v20;
					v24 = *((_OWORD*)v20 + 1);
					v21 += 128i64;
					v20 += 32;
					*(_OWORD*)(v21 - 128) = v23;
					v25 = *((_OWORD*)v20 - 6);
					*(_OWORD*)(v21 - 112) = v24;
					v26 = *((_OWORD*)v20 - 5);
					*(_OWORD*)(v21 - 96) = v25;
					v27 = *((_OWORD*)v20 - 4);
					*(_OWORD*)(v21 - 80) = v26;
					v28 = *((_OWORD*)v20 - 3);
					*(_OWORD*)(v21 - 64) = v27;
					v29 = *((_OWORD*)v20 - 2);
					*(_OWORD*)(v21 - 48) = v28;
					v30 = *((_OWORD*)v20 - 1);
					*(_OWORD*)(v21 - 32) = v29;
					*(_OWORD*)(v21 - 16) = v30;
					--v22;
				} while (v22);
				v31 = *((_OWORD*)v20 + 1);
				result = *((_QWORD*)v20 + 6);
				*(_OWORD*)v21 = *(_OWORD*)v20;
				v32 = *((_OWORD*)v20 + 2);
				*(_OWORD*)(v21 + 16) = v31;
				*(_OWORD*)(v21 + 32) = v32;
				*(_QWORD*)(v21 + 48) = result;
			}
			*(_DWORD*)(a1 + 1176) = 3;
		}
		if (*(int*)(a1 + 1180) <= 3)
		{
			v33 = v78;
			v34 = (int*)(a1 + 344);
			if ((((unsigned __int8)(a1 + 88) | (unsigned __int8)v78) & 0xF) != 0)
			{
				result = (__int64)sub_1407DB590(v34, (int*)v78, 0x190ui64);
			}
			else
			{
				result = 3i64;
				do
				{
					v35 = *(_OWORD*)v33;
					v36 = *((_OWORD*)v33 + 1);
					v34 += 32;
					v33 += 16;
					*((_OWORD*)v34 - 8) = v35;
					v37 = *((_OWORD*)v33 - 6);
					*((_OWORD*)v34 - 7) = v36;
					v38 = *((_OWORD*)v33 - 5);
					*((_OWORD*)v34 - 6) = v37;
					v39 = *((_OWORD*)v33 - 4);
					*((_OWORD*)v34 - 5) = v38;
					v40 = *((_OWORD*)v33 - 3);
					*((_OWORD*)v34 - 4) = v39;
					v41 = *((_OWORD*)v33 - 2);
					*((_OWORD*)v34 - 3) = v40;
					v42 = *((_OWORD*)v33 - 1);
					*((_OWORD*)v34 - 2) = v41;
					*((_OWORD*)v34 - 1) = v42;
					--result;
				} while (result);
				*(_OWORD*)v34 = *(_OWORD*)v33;
			}
			*(_DWORD*)(a1 + 1180) = 3;
		}
		if (*(int*)(a1 + 1188) <= 3)
		{
			v43 = v48;
			*(_DWORD*)(a1 + 1188) = 3;
			*(_QWORD*)(a1 + 744) = __PAIR64__(v49, v43);
			*(_QWORD*)(a1 + 752) = v50;
			result = *(_QWORD*)a1;
			if (*(_QWORD*)a1)
			{
				v44 = *(_QWORD*)(result + 88);
				if (v44)
				{
					if (*(int*)(v44 + 8) <= 0)
					{
						result = 0i64;
						*(_QWORD*)(a1 + 744) = 0i64;
						*(_QWORD*)(a1 + 752) = 0i64;
						*(_DWORD*)(a1 + 1188) = 0;
					}
				}
			}
		}
	}
	if (*(int*)(a1 + 1196) < 6)
	{
		result = (__int64)sub_14001C2B0(a1 + 760, *(int**)(a1 + 768), *(int**)(a1 + 776));
		*(_DWORD*)(a1 + 1196) = 0;
	}
	return result;
}
// 1404134B7: conditional instruction was optimized away because rcx.8!=0
// 140B66A40: using guessed type __int64 (__fastcall *off_140B66A40[121])();
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140412FD0: using guessed type int var_490[8];
// 140412FD0: using guessed type int var_150[80];

