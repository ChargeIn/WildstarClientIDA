//----- (000000014084BF40) ----------------------------------------------------
__int64 __fastcall sub_14084BF40(__int64 a1, _QWORD* a2)
{
	__int64 result; // rax
	_DWORD* v5; // rbx
	int v6; // ecx

	*(_QWORD*)(a1 + 112) = *(_QWORD*)(a1 + 104);
	result = *(_DWORD*)(a1 + 136) >> 31;
	if (*(int*)(a1 + 136) >= 0)
	{
		*(_DWORD*)(a1 + 136) |= 0x40000000u;
	}
	else
	{
		v5 = (_DWORD*)*a2;
		if (*a2 == a2[1])
		{
		LABEL_5:
			result = (*(_DWORD*)(a1 + 136) ^ (((unsigned int)((a2[1] - *a2) / 36i64) == 0) << 30)) & 0x40000000;
			*(_DWORD*)(a1 + 136) ^= result;
		}
		else
		{
			while (1)
			{
				result = sub_14084BDE0(a1 + 104);
				if (!result)
					break;
				v6 = *v5;
				v5 += 9;
				*(_DWORD*)result = v6;
				*(_DWORD*)(result + 4) = *(v5 - 8);
				*(_DWORD*)(result + 8) = *(v5 - 7);
				*(_DWORD*)(result + 12) = *(v5 - 6);
				*(_BYTE*)(result + 16) ^= (*(_BYTE*)(result + 16) ^ *((_BYTE*)v5 - 20)) & 1;
				*(_BYTE*)(result + 16) ^= (*(_BYTE*)(result + 16) ^ *((_BYTE*)v5 - 20)) & 2;
				*(_BYTE*)(result + 17) = *((_BYTE*)v5 - 19);
				if (v5 == (_DWORD*)a2[1])
					goto LABEL_5;
			}
		}
	}
	return result;
}

