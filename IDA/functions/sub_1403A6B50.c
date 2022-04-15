//----- (00000001403A6B50) ----------------------------------------------------
__int64 __fastcall sub_1403A6B50(__int64 a1, int* a2)
{
	__int64 v3; // r14
	int* v5; // rcx
	int v6; // edx
	__int64 v7; // rbx
	int v8; // edi
	__int64 v9; // rax
	__int64 v10; // [rsp+50h] [rbp+18h] BYREF

	v3 = sub_1403AC780(qword_140C65898 + 160, a2);
	if (!v3)
		return 2147500037i64;
	v5 = *(int**)(a1 + 26392);
	v6 = *v5;
	if (*v5 == *(_DWORD*)(*(_QWORD*)(a1 + 120) + 8i64))
		v6 = v5[2];
	v7 = sub_1403D90D0(a1, v6);
	if (!v7)
		return 2147500037i64;
	v8 = *(_DWORD*)(*(_QWORD*)(a1 + 120) + 8i64);
	v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 48i64))(v3);
	if ((unsigned int)sub_1403ADC30(*(_QWORD*)(a1 + 26392), v8, v9, v3, v7 + 416))
		return 2147500037i64;
	v10 = 0i64;
	v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 48i64))(v3);
	sub_1403F4900(a1, 0x18Du, (__int64)&v10);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

