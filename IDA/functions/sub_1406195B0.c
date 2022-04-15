//----- (00000001406195B0) ----------------------------------------------------
__int64 sub_1406195B0()
{
	int v1; // edx
	__int64 v2; // rax
	__int64 v3; // rbx
	__int64 v4; // rax
	__int64 v5; // rax

	if (*(_QWORD*)(qword_140C65950 + 112))
		return 2147500037i64;
	if (*(_DWORD*)(qword_140C65898 + 26180) == 29)
		v1 = *(_DWORD*)(qword_140C65898 + 26176);
	else
		v1 = 0;
	v2 = sub_1403D90D0(qword_140C65898, v1);
	v3 = v2;
	if (!v2)
		return 2147500037i64;
	v4 = *(_QWORD*)(v2 + 24);
	if (!v4)
		return 2147500037i64;
	if (!qword_140C65970)
		return 2147500037i64;
	v5 = sub_1404804A0(qword_140C65970, *(_DWORD*)(v4 + 120), 22);
	if (!v5 || (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 56i64))(v5))
		return 2147500037i64;
	sub_1403A71F0(qword_140C65898, *(_DWORD*)(v3 + 8), 0x1Du, 1);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65950: using guessed type __int64 qword_140C65950;
// 140C65970: using guessed type __int64 qword_140C65970;

