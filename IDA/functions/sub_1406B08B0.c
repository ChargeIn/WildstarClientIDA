//----- (00000001406B08B0) ----------------------------------------------------
__int64 __fastcall sub_1406B08B0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	unsigned __int64 v4; // rdx
	__int64 v6; // r9
	unsigned __int64 v7; // rdx
	unsigned int v8; // ecx
	__int64 v9; // r8
	__int64 v10; // rax
	unsigned int v11; // ebx
	__int64 v12; // rcx

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && qword_140C659F0)
	{
		v4 = *(_QWORD*)(v2 + 16);
		if (v4 ? sub_1404B6E50(v3, v4) : sub_1404C9B90(v3, *(_DWORD*)(v2 + 8)))
		{
			v6 = 0i64;
			v7 = *(_QWORD*)(qword_140C63650 + 768);
			v8 = 0;
			if (v7)
			{
				v9 = *(_QWORD*)(qword_140C63650 + 760);
				v10 = 0i64;
				while (*(_QWORD**)(*(_QWORD*)(v9 + 8 * v10) + 400i64) != a1)
				{
					v10 = ++v8;
					if (v8 >= v7)
						goto LABEL_13;
				}
				v6 = *(_QWORD*)(v9 + 8i64 * v8);
			}
		LABEL_13:
			v11 = sub_1400F26A0(v6 + 384, 2);
			if (sub_1405B1510(&qword_140C7DFB0))
			{
				v12 = *(_QWORD*)(qword_140C659F8 + 200);
				if (v12)
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v12 + 40i64))(v12, v11);
			}
		}
	}
	return 0i64;
}
// 1406B08EA: variable 'v3' is possibly undefined
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C659F8: using guessed type __int64 qword_140C659F8;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

