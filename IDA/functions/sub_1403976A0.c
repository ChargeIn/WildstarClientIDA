//----- (00000001403976A0) ----------------------------------------------------
int* __fastcall sub_1403976A0(__int64 a1, __int64 a2)
{
	int v2; // ecx
	__int64 v3; // r8
	__int64 v4; // rcx
	int* result; // rax
	bool v6; // zf
	__int64 v7; // rcx
	__int64 v8; // rax

	v2 = *(_DWORD*)a2;
	if (*(int*)a2 >= 300)
		return (int*)&unk_1409E794C;
	v3 = *(unsigned int*)(a2 + 4);
	if ((_DWORD)v3 == -1 || !v2 && (unsigned int)v3 >= 0x1F)
		return (int*)&unk_1409E794C;
	if (v2 != 4)
	{
		v6 = v2 == 6;
		v7 = qword_140C65898 + 160;
		if (v6)
		{
			result = sub_1403ACAB0(v7, (int*)a2);
			if (!result)
				return result;
		}
		else
		{
			v8 = sub_1403AC780(v7, (int*)a2);
			if (!v8)
				return 0i64;
			result = *(int**)(v8 + 64);
		}
		return (int*)*((_QWORD*)result + 61);
	}
	v4 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 2704) + 8 * v3);
	if (!v4)
		return 0i64;
	return (int*)(*(__int64(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v4 + 136i64))(
		v4,
		a2,
		v3,
		qword_140C65898);
}
// 140C65898: using guessed type __int64 qword_140C65898;

