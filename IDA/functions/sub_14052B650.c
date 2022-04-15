//----- (000000014052B650) ----------------------------------------------------
__int64 __fastcall sub_14052B650(__int64 a1)
{
	__int64 v2; // rax
	_DWORD* v3; // rax
	__int64 v4; // rcx
	unsigned int v5; // ebp
	unsigned int v6; // r15d
	_QWORD* v7; // r14
	__int64 v8; // rcx
	_QWORD* v9; // rsi
	__int64 v10; // rcx
	__int64* v11; // rcx
	__int64 v12; // rbx
	__int64 v13; // rax
	char v14; // al
	__int64 v15; // rbx
	int v16; // edi
	__int64 result; // rax
	__int64 v18; // [rsp+40h] [rbp-38h]
	__int64 v19; // [rsp+80h] [rbp+8h] BYREF

	v2 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1152) + 16i64))(*(_QWORD*)(a1 + 1152));
	sub_14018D540(&v19, (__int64)L"UI\\Maps\\%s\\UI_CRB_Revealed.tga", v2);
	v3 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1152) + 88i64))(*(_QWORD*)(a1 + 1152));
	v4 = *(_QWORD*)(a1 + 1416);
	v5 = v3[2] - *v3;
	v6 = v3[3] - v3[1];
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		*(_QWORD*)(a1 + 1416) = 0i64;
	}
	v7 = (_QWORD*)(a1 + 1424);
	v8 = *(_QWORD*)(a1 + 1424);
	if (v8)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
		*v7 = 0i64;
	}
	v9 = (_QWORD*)(a1 + 1448);
	v10 = *(_QWORD*)(a1 + 1448);
	if (v10)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
		*v9 = 0i64;
	}
	v11 = *(__int64**)(a1 + 1152);
	v12 = *v11;
	v13 = (*(__int64(__fastcall**)(__int64*))(*v11 + 88))(v11);
	v14 = (*(__int64(__fastcall**)(_QWORD, __int64))(v12 + 104))(*(_QWORD*)(a1 + 1152), v13);
	v15 = v19;
	v18 = a1 + 1416;
	v16 = 0;
	if ((v14 & 1) == 0)
		v16 = -16645630;
	result = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, __int64, int, _DWORD, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 80i64))(
		qword_140C65670,
		v19,
		0i64,
		1i64,
		2,
		0,
		0,
		0,
		v18);
	if ((int)result >= 0)
	{
		result = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _DWORD, int, _DWORD, int, int, _QWORD*))(*(_QWORD*)qword_140C65670 + 88i64))(
			qword_140C65670,
			v5,
			v6,
			1i64,
			0,
			3,
			0,
			63,
			v16,
			v7);
		if ((int)result >= 0)
			result = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _DWORD, int, _DWORD, int, _DWORD, _QWORD*))(*(_QWORD*)qword_140C65670 + 88i64))(
				qword_140C65670,
				v5,
				v6,
				1i64,
				0,
				3,
				0,
				63,
				0,
				v9);
	}
	if (v15)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v15 - 16) + 8i64))(v15 - 16);
	return result;
}
// 140B13020: using guessed type wchar_t aUiMapsSUiCrbRe_0[31];
// 140C65670: using guessed type __int64 qword_140C65670;

