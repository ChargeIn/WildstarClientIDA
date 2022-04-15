//----- (00000001406AFDA0) ----------------------------------------------------
__int64 __fastcall sub_1406AFDA0(_QWORD* a1)
{
	__int64 v1; // rax
	__int64 v2; // rcx
	unsigned __int64 v3; // rdx
	__int64 v4; // rax
	__int64 v5; // rcx
	__int64 v6; // rbx
	__int64 v7; // rcx
	_QWORD* v8; // rax

	v1 = sub_140056AB0(a1, 1u);
	if (v1 && qword_140C659F0)
	{
		v3 = *(_QWORD*)(v1 + 16);
		v4 = v3 ? sub_1404B6E50(v2, v3) : sub_1404C9B90(v2, *(_DWORD*)(v1 + 8));
		if (v4)
		{
			v5 = *(_QWORD*)(qword_140C659F8 + 200);
			if (v5)
			{
				if (v4 == (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 152i64))(v5))
				{
					v6 = qword_140C659F8;
					v7 = *(_QWORD*)(qword_140C659F8 + 200);
					if (v7)
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
						*(_QWORD*)(v6 + 200) = 0i64;
					}
					v8 = (_QWORD*)sub_1405B1510(*(_QWORD**)(qword_140C659F0 + 824));
					if (v8)
						sub_1405AFE10(v8);
				}
			}
		}
	}
	return 0i64;
}
// 1406AFDD7: variable 'v2' is possibly undefined
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C659F8: using guessed type __int64 qword_140C659F8;

