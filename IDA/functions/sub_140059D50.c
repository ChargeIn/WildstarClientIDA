//----- (0000000140059D50) ----------------------------------------------------
__int64 __fastcall sub_140059D50(__int64 a1, _BYTE* a2, __int64 a3, __int64 a4, __int64 a5)
{
	_BYTE* v7; // rbx
	unsigned int v9; // esi
	char i; // al
	char* v12; // rax

	v7 = a2;
	v9 = 1;
	if (a4)
	{
		for (i = *a2; i; ++v7)
		{
			switch (i)
			{
			case 'L':
			case 'f':
				break;
			case 'S':
				sub_140059BA0(a3, a4);
				break;
			case 'l':
				if (a5)
					*(_DWORD*)(a3 + 40) = sub_140059A60(a1, a5);
				else
					*(_DWORD*)(a3 + 40) = -1;
				break;
			case 'n':
				if (a5)
					v12 = sub_14005A870(a1, a5, (__int64*)(a3 + 8));
				else
					v12 = 0i64;
				*(_QWORD*)(a3 + 16) = v12;
				if (!v12)
				{
					*(_QWORD*)(a3 + 16) = &unk_140C635FF;
					*(_QWORD*)(a3 + 8) = 0i64;
				}
				break;
			case 'u':
				*(_DWORD*)(a3 + 44) = *(unsigned __int8*)(a4 + 11);
				break;
			default:
				v9 = 0;
				break;
			}
			i = v7[1];
		}
		return v9;
	}
	else
	{
		*(_DWORD*)(a3 + 40) = -1;
		*(_QWORD*)(a3 + 16) = &unk_140C63640;
		*(_QWORD*)(a3 + 8) = &unk_140C63640;
		*(_QWORD*)(a3 + 48) = -1i64;
		*(_QWORD*)(a3 + 32) = aTailCall;
		*(_QWORD*)(a3 + 24) = aTail;
		sub_14005B160((_BYTE*)(a3 + 56), aTailCall, 0x3Cui64);
		*(_DWORD*)(a3 + 44) = 0;
		return 1i64;
	}
}

