//----- (00000001404FA860) ----------------------------------------------------
__int64 __fastcall sub_1404FA860(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	__int64 v4; // rcx
	int v5; // eax
	float v6; // xmm0_4
	__int64 v7; // rax

	v2 = sub_1404F87C0(a1, 1u);
	v3 = v2;
	if (v2)
	{
		v4 = *(_QWORD*)(v2 + 2328);
		if (v4 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4) > 0)
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 2328) + 112i64))(*(_QWORD*)(v3 + 2328));
		if (*(_QWORD*)(v3 + 2168))
		{
			v5 = sub_140056D60(a1, 2u);
			if (v5 < 0 || v5 >= (int)((__int64)(*(_QWORD*)(v3 + 7168) - *(_QWORD*)(v3 + 7160)) >> 3))
				v6 = 0.0;
			else
				v6 = *(float*)(*(_QWORD*)(v3 + 7160) + 8i64 * v5 + 4);
			v7 = a1[2];
			*(double*)v7 = v6;
			*(_DWORD*)(v7 + 8) = 3;
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	}
	a1[2] += 16i64;
	return 1i64;
}

