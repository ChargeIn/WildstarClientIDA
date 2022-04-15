#include "../winhttp.h"

//----- (000000014045BAC0) ----------------------------------------------------
_OWORD* __fastcall sub_14045BAC0(__int64 a1, _OWORD* a2)
{
	int v4; // eax
	__int128 v5; // xmm0
	_OWORD* result; // rax
	__int64 v7; // rcx
	__int64 v8; // rax
	int v9; // eax
	__int64 v10; // rcx
	_OWORD* v11; // rax
	int v12; // eax
	__int128 v13; // xmm0
	__int64 v14; // rsi
	int v15; // eax
	int v16; // eax
	__int64 v17; // rax
	int v18; // ecx
	int v19; // eax
	int v20; // eax
	int v21; // ecx
	int v22; // eax
	int v23; // eax
	__int128 v24; // xmm0

	if (*(_DWORD*)(a1 + 128))
		goto LABEL_19;
	if (*(_DWORD*)(a1 + 592))
	{
		v4 = dword_140C46C40;
		if (*(_DWORD*)qword_140C63750 < dword_140C46C40)
			v4 = *(_DWORD*)qword_140C63750;
		v5 = xmmword_140C46C50[v4];
		result = a2;
		*a2 = v5;
		return result;
	}
	if (!*(_DWORD*)(a1 + 304))
	{
		v7 = *(_QWORD*)(qword_140C65898 + 120);
		if (!v7
			|| *(_DWORD*)(a1 + 292) != *(_DWORD*)(v7 + 8)
			&& ((v8 = *(_QWORD*)(a1 + 296)) == 0 || *(_QWORD*)(v7 + 6304) != v8))
		{
			if ((unsigned int)sub_14045BD30(a1) && sub_140482450(a1))
			{
				v9 = dword_140C47000;
				if (*(_DWORD*)qword_140C63750 < dword_140C47000)
					v9 = *(_DWORD*)qword_140C63750;
				v10 = v9;
				v11 = &unk_140C47010;
			LABEL_39:
				v24 = v11[v10];
				result = a2;
				*a2 = v24;
				return result;
			}
		LABEL_19:
			v14 = *(_QWORD*)(qword_140C65898 + 120);
			if (v14)
			{
				v15 = sub_14045A950(*(_QWORD*)(qword_140C65898 + 120), *(_DWORD*)(a1 + 8));
				if (v15)
				{
					v16 = v15 - 1;
					if (v16)
					{
						if (v16 == 1)
						{
							v17 = sub_140605340(qword_140C65898 + 27664, a1 + 416);
							v18 = *(_DWORD*)qword_140C63750;
							if (v17)
							{
								v19 = dword_140C47180;
								if (v18 < dword_140C47180)
									v19 = *(_DWORD*)qword_140C63750;
								v10 = v19;
								v11 = &unk_140C47190;
							}
							else
							{
								v20 = dword_140C46AC0;
								if (v18 < dword_140C46AC0)
									v20 = *(_DWORD*)qword_140C63750;
								v10 = v20;
								v11 = &unk_140C46AD0;
							}
							goto LABEL_39;
						}
						goto LABEL_35;
					}
					v21 = *(_DWORD*)qword_140C63750;
					if (*(_DWORD*)(a1 + 264) != *(_DWORD*)(v14 + 8))
					{
					LABEL_36:
						v23 = dword_140C46A00;
						if (v21 < dword_140C46A00)
							v23 = v21;
						v10 = v23;
						v11 = &unk_140C46A10;
						goto LABEL_39;
					}
				}
				else
				{
					v21 = *(_DWORD*)qword_140C63750;
				}
				v22 = dword_140C46B80;
				if (v21 < dword_140C46B80)
					v22 = v21;
				v10 = v22;
				v11 = xmmword_140C46B90;
				goto LABEL_39;
			}
		LABEL_35:
			v21 = *(_DWORD*)qword_140C63750;
			goto LABEL_36;
		}
	}
	v12 = dword_140C46B80;
	if (*(_DWORD*)qword_140C63750 < dword_140C46B80)
		v12 = *(_DWORD*)qword_140C63750;
	v13 = xmmword_140C46B90[v12];
	result = a2;
	*a2 = v13;
	return result;
}
// 140C46A00: using guessed type int dword_140C46A00;
// 140C46AC0: using guessed type int dword_140C46AC0;
// 140C46B80: using guessed type int dword_140C46B80;
// 140C46B90: using guessed type _OWORD xmmword_140C46B90[7];
// 140C46C40: using guessed type int dword_140C46C40;
// 140C46C50: using guessed type _OWORD xmmword_140C46C50[7];
// 140C47000: using guessed type int dword_140C47000;
// 140C47180: using guessed type int dword_140C47180;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;

