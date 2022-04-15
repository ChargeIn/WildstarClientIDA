//----- (00000001408827A0) ----------------------------------------------------
__int64 __fastcall sub_1408827A0(int a1, _QWORD* a2, int a3)
{
	__int64 result; // rax
	__int64 v7; // r9
	int v8; // eax

	result = sub_1408819F0(dword_140C111C0, 48i64);
	v7 = result;
	if (result)
	{
		*(_DWORD*)(result + 44) &= ~1u;
		v8 = *(_DWORD*)(result + 44);
		if (a2)
		{
			*(_DWORD*)(v7 + 44) = v8 | 2;
			*(_QWORD*)(v7 + 8) = *a2;
			*(_QWORD*)(v7 + 16) = a2[1];
			*(_QWORD*)(v7 + 24) = a2[2];
			*(_QWORD*)(v7 + 32) = a2[3];
		}
		else
		{
			*(_DWORD*)(v7 + 44) = v8 & 0xFFFFFFFD;
		}
		*(_DWORD*)v7 = a1;
		*(_DWORD*)(v7 + 40) = a3;
		return v7;
	}
	return result;
}
// 140C111C0: using guessed type int dword_140C111C0;

