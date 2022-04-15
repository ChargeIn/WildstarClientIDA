//----- (000000014043C3F0) ----------------------------------------------------
void __fastcall sub_14043C3F0(_DWORD* a1, _DWORD* a2)
{
	int* v4; // rax
	char v5[24]; // [rsp+20h] [rbp-68h] BYREF
	int* v6; // [rsp+38h] [rbp-50h]
	int* v7; // [rsp+40h] [rbp-48h]
	int* v8; // [rsp+48h] [rbp-40h]

	if (a2 && *(_QWORD*)(qword_140C65898 + 120) && !(unsigned int)sub_14043D3D0((__int64)a1, a2))
	{
		v4 = sub_14018B280(16i64, 0);
		v6 = v4;
		v7 = v4;
		v8 = v4 + 4;
		if (v4)
			*(_WORD*)v4 = 0;
		sub_14043CC10(a2, (__int64)v5);
		sub_14043BF30(a1, (__int64)v5);
		if (v6)
			sub_14018B900((__int64)v6, 0);
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

