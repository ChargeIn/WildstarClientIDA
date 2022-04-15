//----- (00000001404FAB20) ----------------------------------------------------
__int64 __fastcall sub_1404FAB20(_QWORD* a1)
{
	__int64 v1; // rax
	__int64 v2; // rbx
	__int64 v3; // rcx
	__int64 v4; // rsi
	int v5; // edi
	__int64 v6; // rbp

	v1 = sub_1404F87C0(a1, 1u);
	v2 = v1;
	if (v1)
	{
		v3 = *(_QWORD*)(v1 + 2328);
		if (v3 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v3 + 24i64))(v3) > 0)
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v2 + 2328) + 112i64))(*(_QWORD*)(v2 + 2328));
		v4 = *(_QWORD*)(v2 + 2168);
		if (v4)
		{
			v5 = 0;
			if ((int)((__int64)(*(_QWORD*)(v2 + 7224) - *(_QWORD*)(v2 + 7216)) >> 3) > 0)
			{
				v6 = 0i64;
				do
				{
					sub_14002FA90(v2 + 2336, v4, v5++, *(float*)(*(_QWORD*)(v2 + 7216) + v6 + 4));
					v6 += 8i64;
				} while (v5 < (int)((__int64)(*(_QWORD*)(v2 + 7224) - *(_QWORD*)(v2 + 7216)) >> 3));
			}
			sub_140030080(v2 + 2336, v4);
		}
	}
	return 0i64;
}

