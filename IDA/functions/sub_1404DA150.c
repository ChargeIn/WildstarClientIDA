//----- (00000001404DA150) ----------------------------------------------------
__int64 __fastcall sub_1404DA150(__int64 a1)
{
	__int64 v1; // rax
	__int64 v3; // rax
	int v4; // edx
	__int64 v5; // r10
	int* v6; // r11
	int v7; // eax
	float v8; // xmm3_4
	int v9; // ecx
	__int64 result; // rax
	int v11; // edx
	__int64 v12; // r10
	int* v13; // r11
	int v14; // eax
	float v15; // xmm3_4
	int v16; // ecx

	v1 = *(_QWORD*)(a1 + 120);
	if (v1 && (v3 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v1 + 192))) != 0 && *(_DWORD*)(v3 + 128) == 9)
	{
		v4 = dword_140C4DDE0;
		v5 = *(_QWORD*)(a1 + 29088);
		v6 = (int*)qword_140C63750;
		v7 = dword_140C4DDE0;
		v8 = *(float*)(v5 + 680) * 1.2;
		if (*(_DWORD*)qword_140C63750 < dword_140C4DDE0)
			v7 = *(_DWORD*)qword_140C63750;
		if (v8 < dword_140C4DDF0[v7])
		{
			if (*(_DWORD*)qword_140C63750 < dword_140C4DDE0)
				v4 = *(_DWORD*)qword_140C63750;
			v8 = dword_140C4DDF0[v4];
		}
		*(float*)(v5 + 752) = (float)(v8 + *(float*)(v5 + 752)) - *(float*)(v5 + 680);
		v9 = dword_140C4DE40;
		if (*v6 < dword_140C4DE40)
			v9 = *v6;
		result = *(_QWORD*)(a1 + 29088);
		*(float*)(result + 680) = fminf(v8, *((float*)&xmmword_140C4DE50 + v9));
	}
	else
	{
		v11 = dword_140C4DDE0;
		v12 = *(_QWORD*)(a1 + 29088);
		v13 = (int*)qword_140C63750;
		v14 = dword_140C4DDE0;
		v15 = *(float*)(v12 + 668) * 1.2;
		if (*(_DWORD*)qword_140C63750 < dword_140C4DDE0)
			v14 = *(_DWORD*)qword_140C63750;
		if (v15 < dword_140C4DDF0[v14])
		{
			if (*(_DWORD*)qword_140C63750 < dword_140C4DDE0)
				v11 = *(_DWORD*)qword_140C63750;
			v15 = dword_140C4DDF0[v11];
		}
		*(float*)(v12 + 752) = (float)(v15 + *(float*)(v12 + 752)) - *(float*)(v12 + 668);
		v16 = dword_140C4DE40;
		if (*v13 < dword_140C4DE40)
			v16 = *v13;
		result = *(_QWORD*)(a1 + 29088);
		*(float*)(result + 668) = fminf(v15, *((float*)&xmmword_140C4DE50 + v16));
	}
	return result;
}
// 140C4DDE0: using guessed type int dword_140C4DDE0;
// 140C4DDF0: using guessed type float dword_140C4DDF0[14];
// 140C4DE40: using guessed type int dword_140C4DE40;
// 140C4DE50: using guessed type __int128 xmmword_140C4DE50;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;

