//----- (00000001404DA040) ----------------------------------------------------
__int64 __fastcall sub_1404DA040(__int64 a1)
{
	__int64 v1; // rax
	__int64 v3; // rax
	__int64 v4; // rdx
	int v5; // eax
	float v6; // xmm1_4
	__int64 result; // rax
	__int64 v8; // rdx
	int v9; // eax
	float v10; // xmm1_4

	v1 = *(_QWORD*)(a1 + 120);
	if (v1 && (v3 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v1 + 192))) != 0 && *(_DWORD*)(v3 + 128) == 9)
	{
		v4 = *(_QWORD*)(a1 + 29088);
		v5 = dword_140C4DDE0;
		v6 = *(float*)(v4 + 680) * 0.85000002;
		if (*(_DWORD*)qword_140C63750 < dword_140C4DDE0)
			v5 = *(_DWORD*)qword_140C63750;
		if (v6 < *((float*)&off_140C4DDD0 + v5 + 8))
			v6 = 0.0;
		*(float*)(v4 + 752) = (float)(v6 + *(float*)(v4 + 752)) - *(float*)(v4 + 680);
		result = *(_QWORD*)(a1 + 29088);
		*(float*)(result + 680) = v6;
	}
	else
	{
		v8 = *(_QWORD*)(a1 + 29088);
		v9 = dword_140C4DDE0;
		v10 = *(float*)(v8 + 668) * 0.85000002;
		if (*(_DWORD*)qword_140C63750 < dword_140C4DDE0)
			v9 = *(_DWORD*)qword_140C63750;
		if (v10 < *((float*)&off_140C4DDD0 + v9 + 8))
			v10 = 0.0;
		*(float*)(v8 + 752) = (float)(v10 + *(float*)(v8 + 752)) - *(float*)(v8 + 668);
		result = *(_QWORD*)(a1 + 29088);
		*(float*)(result + 668) = v10;
	}
	return result;
}
// 140C4DDD0: using guessed type __int64 (__fastcall **off_140C4DDD0)();
// 140C4DDE0: using guessed type int dword_140C4DDE0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;

