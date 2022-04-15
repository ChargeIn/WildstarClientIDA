//----- (00000001406499E0) ----------------------------------------------------
__int64 __fastcall sub_1406499E0(__int64 a1)
{
	int* v1; // rax
	__int64 v2; // rdi
	__int64 v3; // rax
	__int64 v5; // rcx
	BOOL v6; // ebx
	__int64 v7; // rcx
	int v8; // esi
	__int64 v9; // rcx
	__int64 v10; // rcx
	int v11; // eax

	v1 = (int*)sub_1406622C0(a1, 1);
	if (!v1)
		return 0i64;
	v2 = sub_1403D90D0(qword_140C65898, *v1);
	if (!v2)
		return 0i64;
	v3 = qword_140C65898;
	if (!qword_140C65898)
		return 0i64;
	if (v2 == *(_QWORD*)(qword_140C65898 + 120))
		return v2;
	v5 = *(_QWORD*)(qword_140C65898 + 25744);
	if (v5)
	{
		v6 = sub_14045A950(v5, *(_DWORD*)(v2 + 8)) == 0;
	}
	else
	{
		v7 = *(_QWORD*)(v2 + 280);
		v6 = 0;
		if (v7)
		{
			v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 24i64))(v7);
			v3 = qword_140C65898;
		}
		else
		{
			v8 = 0;
		}
		v9 = *(_QWORD*)(v3 + 120);
		if (v9 && (v10 = *(_QWORD*)(v9 + 280)) != 0)
			v11 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 24i64))(v10);
		else
			v11 = 0;
		LOBYTE(v6) = v8 != v11;
	}
	if (!v6 || (*(_BYTE*)(v2 + 5544) & 3) == 0)
		return v2;
	else
		return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

