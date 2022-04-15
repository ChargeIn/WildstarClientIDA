//----- (00000001404CFC10) ----------------------------------------------------
void __fastcall sub_1404CFC10(__int64 a1, __int64* a2, __int64* a3)
{
	__int64 v4; // rcx
	__int64 v7; // rax
	__int64 v8[3]; // [rsp+20h] [rbp-18h] BYREF

	v4 = *a2;
	if (!*a2)
	{
		*a2 = a1;
		v7 = *a3;
		v8[0] = (__int64)a2;
	LABEL_7:
		v8[1] = v7;
		a2[1] = sub_1404CFD50((__int64*)(a1 + 8), v8);
		sub_1403D7E90(a1, (__int64)a2);
		return;
	}
	if (v4 != a1)
	{
		sub_1403D6480(v4, a2);
		*a2 = a1;
		v7 = *a3;
		v8[0] = (__int64)a2;
		goto LABEL_7;
	}
	*(_QWORD*)(*(_QWORD*)(a1 + 8) + 16 * a2[1] + 8) = *a3;
	if (!(unsigned int)sub_1403D7E90(a1, (__int64)a2))
		sub_1403D7F70(a1, (__int64)a2);
}

