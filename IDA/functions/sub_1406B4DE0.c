//----- (00000001406B4DE0) ----------------------------------------------------
__int64 __fastcall sub_1406B4DE0(_QWORD* a1)
{
	__int64* v1; // rax
	__int64 v2; // rdi
	int* v3; // rax
	int* v4; // rbx
	_DWORD* v5; // rcx
	__int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF

	v1 = (__int64*)sub_140056AB0(a1, 1u);
	if (v1)
		v2 = *v1;
	else
		v2 = 0i64;
	v7[1] = 1i64;
	v3 = sub_14018B280(24i64, 0);
	if (v3)
	{
		*((_QWORD*)v3 + 1) = 1i64;
		*(_QWORD*)v3 = off_140B55060;
	}
	v4 = v3 + 4;
	v5 = (_DWORD*)(qword_140C65898 + 27592);
	v7[0] = (__int64)(v3 + 4);
	*((_QWORD*)v3 + 2) = v2;
	sub_14062AD80(v5, v7);
	if (v4)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v4 - 2) + 8i64))(v4 - 4);
	return 0i64;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65898: using guessed type __int64 qword_140C65898;

