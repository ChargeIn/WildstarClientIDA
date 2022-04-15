//----- (0000000140570810) ----------------------------------------------------
__int64 __fastcall sub_140570810(__int64 a1, __int64 a2, __int64* a3)
{
	__int64 v3; // rdi
	__int64 result; // rax
	__int64 v7; // rax
	__int64 v8; // rcx
	unsigned int v9; // edx
	__int64 v10; // rax
	__int64 v11; // rax
	__int64 v12; // rbx
	__int64 v13; // rax
	__int64* v14; // rax
	__int64 v15; // rax
	__int64 v16; // rdi

	v3 = qword_140C65970;
	if (*(_DWORD*)(qword_140C65970 + 8))
		return 0i64;
	if (!a2)
		return 0i64;
	v7 = *(_QWORD*)(a2 + 24);
	if (!v7)
		return 0i64;
	v8 = *(_QWORD*)(qword_140C65970 + 88);
	v9 = *(_DWORD*)(v7 + 328);
	if (!v8)
	{
		v10 = sub_1403D7BC0(qword_140C65970, v9);
		if (v10 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v10 + 56i64))(v10))
			return 2i64;
		return 0i64;
	}
	v11 = sub_140489580(v8, v9);
	v12 = v11;
	if (a3)
		*a3 = v11;
	if (!v11)
	{
		v13 = sub_1403D7BC0(v3, *(_DWORD*)(*(_QWORD*)(a2 + 24) + 328i64));
		if (v13 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v13 + 56i64))(v13))
			return 2i64;
		return 0i64;
	}
	v14 = *(__int64**)(v11 + 48);
	if (*(_DWORD*)(*v14 + 12))
	{
		if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v12 + 56i64))(v12))
			return (2 * ((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v12 + 88i64))(v12) & 1)) | 1;
		return 2i64;
	}
	v15 = sub_140617410(*v14, *(_DWORD*)(*v14 + 20));
	v16 = v15;
	if (!v15)
		return 0i64;
	if (*(_DWORD*)v15)
	{
		if (*(_DWORD*)(*(_QWORD*)(v15 + 152) + 4i64) == 4)
			return (unsigned int)(*(_DWORD*)v15 == 1) + 3;
		else
			return 3i64;
	}
	if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v12 + 56i64))(v12))
		return 2i64;
	result = 1i64;
	if (*(_DWORD*)(*(_QWORD*)(v16 + 152) + 4i64) == 4)
		return 4i64;
	return result;
}
// 140C65970: using guessed type __int64 qword_140C65970;

