//----- (000000014084CDC0) ----------------------------------------------------
_DWORD* __fastcall sub_14084CDC0(__int64 a1, __int64 a2, int a3)
{
	_DWORD* result; // rax
	__int64 v7; // rbx
	__int64 v8; // [rsp+30h] [rbp+8h]

	result = (_DWORD*)sub_140856D40(1283, 0, (__int64*)(a1 + 32));
	v7 = (__int64)result;
	if (result)
	{
		result[60] = *(_DWORD*)(a1 + 40);
		sub_140857160(result, (_DWORD*)(a2 + 64));
		LODWORD(v8) = a3;
		BYTE4(v8) = 0;
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v7 + 40i64))(v7, v8);
		sub_140857210(v7, *(_QWORD*)(a2 + 8));
		sub_140857400(v7, *(_DWORD*)(a2 + 152));
		sub_140857230(v7, *(_BYTE*)(a2 + 157));
		sub_140857200(v7, *(_DWORD*)(a2 + 136));
		return (_DWORD*)v7;
	}
	return result;
}

