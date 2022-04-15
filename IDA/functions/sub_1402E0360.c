//----- (00000001402E0360) ----------------------------------------------------
__int64 __fastcall sub_1402E0360(_QWORD* a1, unsigned __int64 a2, __int64* a3)
{
	__int64 v6; // r14
	__int64 v7; // rbx
	int* v8; // rax
	__int64 v9; // rcx
	int v10; // esi
	void(__fastcall * **v11)(_QWORD); // [rsp+40h] [rbp+18h] BYREF

	if (!a3)
		return 2147942487i64;
	if (a2 >= a1[680])
		return 2147500037i64;
	v6 = 8 * a2;
	if ((unsigned int)sub_1402DD480(a1[2] + 1784i64, *(_QWORD*)(8 * a2 + a1[679]), &v11))
	{
		v7 = (__int64)v11;
		(**v11)(v11);
	LABEL_7:
		*a3 = v7;
		return 0i64;
	}
	v8 = sub_14018B280(104i64, 1u);
	v7 = (__int64)v8;
	if (!v8)
		return 2147942414i64;
	v9 = a1[2];
	v8[2] = 1;
	*((_QWORD*)v8 + 2) = v9;
	*(_QWORD*)v8 = off_140B63490;
	_InterlockedIncrement((volatile signed __int32*)(v9 + 12));
	*((_QWORD*)v8 + 3) = 0i64;
	*((_QWORD*)v8 + 4) = 0i64;
	v8[24] = 0;
	*((_QWORD*)v8 + 11) = 0i64;
	v10 = sub_1402E4640((__int64)v8, *(_DWORD**)(v6 + a1[679]), *(void(__fastcall****)(_QWORD))(v6 + a1[681]));
	if (v10 >= 0)
		goto LABEL_7;
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
	return (unsigned int)v10;
}
// 140B63490: using guessed type __int64 (__fastcall *off_140B63490[37])();

