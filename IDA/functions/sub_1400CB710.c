//----- (00000001400CB710) ----------------------------------------------------
_QWORD* __fastcall sub_1400CB710(__int64 a1)
{
	int v2; // edx
	_QWORD* v3; // rcx
	__int64 v4; // rcx
	_QWORD* result; // rax
	_QWORD* v6; // rbx

	if ((*(_BYTE*)(a1 + 392) & 2) == 0)
	{
		v2 = 0;
		v3 = (_QWORD*)(a1 + 80);
		while (!*v3)
		{
			++v2;
			++v3;
			if ((unsigned __int64)v2 >= 4)
				goto LABEL_10;
		}
		v4 = *(_QWORD*)(a1 + 16);
		*(_BYTE*)(a1 + 29) &= ~0x80u;
		*(_BYTE*)(a1 + 30) &= ~1u;
		if (v4 && (*(_BYTE*)(v4 + 30) & 1) != 0)
			sub_1400CB660(v4);
		*(_QWORD*)(a1 + 384) = -1i64;
	LABEL_10:
		result = *(_QWORD**)(a1 + 560);
		*(_DWORD*)(a1 + 392) |= 2u;
		v6 = (_QWORD*)*result;
		if ((_QWORD*)*result != result)
		{
			do
			{
				result = (_QWORD*)sub_1400CB710(v6[2]);
				v6 = (_QWORD*)*v6;
			} while (v6 != *(_QWORD**)(a1 + 560));
		}
	}
	return result;
}

