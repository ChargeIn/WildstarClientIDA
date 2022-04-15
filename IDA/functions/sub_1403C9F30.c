//----- (00000001403C9F30) ----------------------------------------------------
void __fastcall sub_1403C9F30(__int64 a1, unsigned int a2)
{
	__int64 v4; // rsi
	void(__fastcall * **v5)(_QWORD, __int64); // rcx
	__int64 v6; // rbx
	int* v7; // rax
	int* v8; // rax
	int* v9; // r14
	int* v10; // rax
	int* v11; // rax
	int* v12; // rax
	int* v13; // rax
	__int64 v14; // r9
	int v15; // ebx
	__int64 v16; // rbx
	__int64 v17; // rax
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-58h] BYREF
	__int64 v19; // [rsp+38h] [rbp-50h]
	LPVOID lpTlsValue; // [rsp+40h] [rbp-48h]
	__int64 v21[4]; // [rsp+50h] [rbp-38h] BYREF
	__int64 v22; // [rsp+90h] [rbp+8h] BYREF

	if (!*(_QWORD*)(a1 + 120))
		return;
	v4 = sub_1401F31E0(a2);
	if (!v4)
		return;
	v5 = *(void(__fastcall****)(_QWORD, __int64))(a1 + 28048);
	if (v5)
		(**v5)(v5, 1i64);
	v6 = 0i64;
	*(_QWORD*)(a1 + 28048) = 0i64;
	switch (*(_DWORD*)(v4 + 24))
	{
	case 1:
		v13 = sub_14018B280(144i64, 0);
		v9 = v13;
		if (v13)
		{
			sub_1405E7330((__int64)v13, v4);
			*(_QWORD*)v9 = off_140B6E570;
			goto LABEL_24;
		}
		break;
	case 2:
		v12 = sub_14018B280(144i64, 0);
		v9 = v12;
		if (v12)
		{
			sub_1405E7330((__int64)v12, v4);
			*(_QWORD*)v9 = off_140B6E3D0;
			goto LABEL_24;
		}
		break;
	case 4:
		v11 = sub_14018B280(144i64, 0);
		v9 = v11;
		if (v11)
		{
			sub_1405E7330((__int64)v11, v4);
			*(_QWORD*)v9 = off_140B66550;
			goto LABEL_24;
		}
		break;
	case 5:
		v10 = sub_14018B280(144i64, 0);
		v9 = v10;
		if (v10)
		{
			sub_1405E7330((__int64)v10, v4);
			*(_QWORD*)v9 = off_140B66630;
			goto LABEL_24;
		}
		break;
	case 6:
		v8 = sub_14018B280(144i64, 0);
		v9 = v8;
		if (v8)
		{
			sub_1405E7330((__int64)v8, v4);
			*(_QWORD*)v9 = off_140B66700;
			goto LABEL_24;
		}
		break;
	default:
		v7 = sub_14018B280(144i64, 0);
		if (v7)
			v6 = sub_1405E7330((__int64)v7, v4);
		*(_QWORD*)(a1 + 28048) = v6;
		return;
	}
	v9 = 0i64;
LABEL_24:
	*(_QWORD*)(a1 + 28048) = v9;
	if (!v9)
	{
		v19 = 0i64;
		TlsValue = &off_140B5E648;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v14 = *(unsigned int*)(v4 + 24);
		v21[0] = (__int64)TlsValue;
		v21[1] = v19;
		v22 = 0x141DF0B40i64;
		v21[2] = (__int64)lpTlsValue;
		v15 = sub_140196F30(&dword_140C8A69C, 28, &v22, v14, a2, v21);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		if (v15)
			DebugBreak();
	}
	v16 = *(_QWORD*)(a1 + 120);
	*(_DWORD*)(a1 + 32128) = *(_DWORD*)(v4 + 92);
	v17 = sub_1401F31E0(a2);
	if (v17)
		*(_QWORD*)(v16 + 224) = v17;
	*(_DWORD*)(v16 + 220) = a2;
	*(_DWORD*)(a1 + 28568) = 1;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B66550: using guessed type __int64 (__fastcall *off_140B66550[19])();
// 140B66630: using guessed type __int64 (__fastcall *off_140B66630[19])();
// 140B66700: using guessed type __int64 (__fastcall *off_140B66700[19])();
// 140B6E3D0: using guessed type __int64 (__fastcall *off_140B6E3D0[19])();
// 140B6E570: using guessed type __int64 (__fastcall *off_140B6E570[19])();
// 140C8A69C: using guessed type _DWORD dword_140C8A69C;

