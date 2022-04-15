#include "../winhttp.h"

//----- (0000000140717990) ----------------------------------------------------
__int64 __fastcall sub_140717990(__int64 a1, __int64 a2, __int64 a3, _DWORD* a4)
{
	__int64* v8; // rdx
	int v9; // r13d
	bool v10; // zf
	__int64 v11; // rax
	__int64* v12; // rcx
	__int64 v13; // rax
	_QWORD* v14; // rcx
	__int64 i; // rbx
	int v16; // eax
	__int16* v17; // rbp
	__int64 v18; // rax
	unsigned __int64 v19; // rbx
	__int64 v20; // rsi
	__int64 v21; // rcx
	__int64 v22; // rsi
	int v23; // edx
	int v24; // eax
	int v25; // ebx
	int v26; // eax
	void(__fastcall * **v27)(_QWORD); // rax
	int* v28; // rax
	__int64 v29; // rdx
	__int64 v30; // rax
	__int64 v31; // rcx
	__int64 v32; // rcx
	_WORD* v33; // rax
	__int64 v34; // rcx
	int v35; // edx
	__int64 v36; // rcx
	int v37; // ebx
	__int16* v38; // rax
	__int64 v39; // rcx
	_QWORD* v40; // r8
	__int64 v41; // rcx
	__int64 v42; // rax
	_QWORD* v43; // rax
	int v45; // [rsp+60h] [rbp+18h] BYREF

	if (!a3 || !a4)
		return 2147500037i64;
	(*(void(__fastcall**)(_DWORD*))(*(_QWORD*)a4 + 8i64))(a4);
	*(_QWORD*)(a1 + 56) = a4;
	*(_DWORD*)(a1 + 68) = *(unsigned __int8*)(a2 + 4);
	v8 = (__int64*)(a3 + 5576);
	*(_DWORD*)(a1 + 64) = *(_DWORD*)(a3 + 8);
	*(_DWORD*)(a1 + 84) = *(unsigned __int8*)(a2 + 5);
	*(_DWORD*)(a1 + 88) = *(_DWORD*)(a2 + 8);
	v9 = *(unsigned __int16*)(a2 + 6) - *(_DWORD*)(a1 + 80);
	v10 = *(_QWORD*)(a1 + 16) == 0i64;
	*(_DWORD*)(a1 + 80) = *(unsigned __int16*)(a2 + 6);
	if (v10)
	{
		*(_QWORD*)(a1 + 16) = v8;
		*(_QWORD*)(a1 + 24) = *v8;
		*v8 = a1;
		v11 = *(_QWORD*)(a1 + 24);
		if (v11)
			*(_QWORD*)(v11 + 16) = a1 + 24;
	}
	v12 = (__int64*)(*(_QWORD*)(a1 + 56) + 72i64);
	if (!*(_QWORD*)(a1 + 32))
	{
		*(_QWORD*)(a1 + 32) = v12;
		*(_QWORD*)(a1 + 40) = *v12;
		*v12 = a1;
		v13 = *(_QWORD*)(a1 + 40);
		if (v13)
			*(_QWORD*)(v13 + 32) = a1 + 40;
	}
	v14 = *(_QWORD**)(a1 + 56);
	if (*(_DWORD*)(*(_QWORD*)(v14[39] + 8i64) + 28i64))
	{
		if (*(_QWORD*)(a3 + 5560))
		{
			if ((unsigned int)sub_140540360(v14, *(_DWORD*)(a3 + 8)))
			{
				for (i = *(_QWORD*)(a3 + 5560); i; i = *(_QWORD*)(i + 1032))
				{
					v16 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 8i64))(*(_QWORD*)(a1 + 56));
					sub_1404FECA0(i, v16);
				}
			}
		}
	}
	v17 = 0i64;
	v18 = *(_QWORD*)(qword_140C65898 + 25744);
	if (v18 && *(_DWORD*)(a1 + 64) == *(_DWORD*)(v18 + 8))
		*(_DWORD*)(qword_140C65898 + 28568) = 1;
	v19 = 0i64;
	*(_DWORD*)(a1 + 48) = dword_140C636A8;
	if (*(_BYTE*)(a2 + 12))
	{
		v20 = 0i64;
		do
		{
			if ((int)sub_140718120(a1, (unsigned int*)(v20 + *(_QWORD*)(a2 + 16))) < 0)
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 8i64))(*(_QWORD*)(a1 + 56));
			++v19;
			v20 += 80i64;
		} while (v19 < *(unsigned __int8*)(a2 + 12));
	}
	v21 = *(_QWORD*)(a1 + 56);
	v22 = *(_QWORD*)(v21 + 312);
	v23 = *(_DWORD*)(*(_QWORD*)(v22 + 112) + 268i64);
	if ((v23 & 1) == 0
		&& ((v23 & 2) == 0 || *(_DWORD*)(a1 + 64) != *(_DWORD*)(v21 + 340))
		&& ((v23 & 4) == 0 || *(_DWORD*)(a1 + 64) != *(_DWORD*)(v21 + 344)))
	{
		if ((v23 & 8) == 0 || (v24 = *(_DWORD*)(a1 + 64), v24 == *(_DWORD*)(v21 + 340)) || v24 == *(_DWORD*)(v21 + 344))
		{
			if (*(_QWORD*)(v22 + 80) || *(_DWORD*)(a1 + 72) + *(_DWORD*)(a1 + 76))
			{
				v25 = *(_DWORD*)(v21 + 340);
				v26 = (*(__int64(__fastcall**)(__int64, bool))(*(_QWORD*)v21 + 8i64))(
					v21,
					*(_DWORD*)(a1 + 72) + *(_DWORD*)(a1 + 76) != 0);
				v27 = (void(__fastcall***)(_QWORD))sub_1404693C0(a3, v26, v25);
				if (v27)
				{
					*(_QWORD*)(a1 + 96) = v27;
					(**v27)(v27);
					v45 = *(_DWORD*)(*(_QWORD*)(a1 + 56) + 92i64);
					sub_140003460((__int64*)(*(_QWORD*)(a1 + 96) + 64i64), &v45);
					sub_140717F00(a1, v9);
				}
				else
				{
					v28 = sub_14018B280(96i64, 0);
					if (v28)
						v29 = sub_140453D90((__int64)v28);
					else
						v29 = 0i64;
					v30 = *(_QWORD*)(a1 + 56);
					*(_QWORD*)(a1 + 96) = v29;
					v45 = *(_DWORD*)(v30 + 92);
					sub_140003460((__int64*)(v29 + 64), &v45);
					*(_QWORD*)(*(_QWORD*)(a1 + 96) + 56i64) = sub_1405645B0(v31, **(_DWORD**)(v22 + 112), 0);
					v32 = *(_QWORD*)(a1 + 96);
					v33 = *(_WORD**)(v32 + 56);
					if (!v33 || !*v33)
						*(_QWORD*)(v32 + 56) = L"UI_Temp_Quest";
					*(_DWORD*)(*(_QWORD*)(a1 + 96) + 28i64) = *(_DWORD*)(a1 + 80);
					*(_DWORD*)(*(_QWORD*)(a1 + 96) + 80i64) = **(_DWORD**)(v22 + 112);
					*(_DWORD*)(*(_QWORD*)(a1 + 96) + 84i64) = *(_DWORD*)(a1 + 64);
					*(_DWORD*)(*(_QWORD*)(a1 + 96) + 88i64) = a4[85];
					v34 = *(_QWORD*)(v22 + 112);
					v35 = 2 - ((*(_DWORD*)(v34 + 268) & 0x4000000) != 0);
					switch (*(_DWORD*)(v34 + 248))
					{
					case 0xE:
						v35 |= 0x40u;
						break;
					case 0x24:
						v35 |= 4u;
						break;
					case 0x25:
						v35 |= 8u;
						break;
					case 0x26:
						v35 |= 0x10u;
						break;
					case 0x27:
						v35 |= 0x20u;
						break;
					}
					*(_DWORD*)(*(_QWORD*)(a1 + 96) + 20i64) = v35;
					sub_1407180C0(a1);
					v36 = *(unsigned int*)(*(_QWORD*)(a1 + 56) + 340i64);
					v37 = 0;
					if (*(_DWORD*)(a1 + 64) != (_DWORD)v36
						|| (v37 = *(_DWORD*)(*(_QWORD*)(v22 + 8) + 36i64), v38 = sub_14034BDD0(v36, v37), (v17 = v38) == 0i64)
						|| !*v38)
					{
						v39 = *(_QWORD*)(a1 + 56);
						if (*(_DWORD*)(a1 + 64) == *(_DWORD*)(v39 + 344))
						{
							v37 = *(_DWORD*)(*(_QWORD*)(v22 + 8) + 40i64);
							v17 = sub_14034BDD0(v39, v37);
						}
					}
					if (!v17 || !*v17)
						v37 = *(_DWORD*)(*(_QWORD*)(v22 + 8) + 44i64);
					v40 = (_QWORD*)(a3 + 5616);
					*(_DWORD*)(*(_QWORD*)(a1 + 96) + 24i64) = v37;
					v41 = *(_QWORD*)(a1 + 96);
					if (!*(_QWORD*)(v41 + 40))
					{
						*(_QWORD*)(v41 + 40) = v40;
						*(_QWORD*)(v41 + 48) = *v40;
						*v40 = v41;
						v42 = *(_QWORD*)(v41 + 48);
						if (v42)
							*(_QWORD*)(v42 + 40) = v41 + 48;
					}
					v43 = sub_1405BBBB0();
					sub_1405BBC70((__int64)v43, *(_DWORD*)(a1 + 64), *(_QWORD*)(a1 + 96));
				}
			}
		}
	}
	return 0i64;
}
// 140717C56: variable 'v31' is possibly undefined
// 140B45F88: using guessed type wchar_t aUiTempQuest_0[14];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

