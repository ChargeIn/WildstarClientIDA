//----- (0000000140060EF0) ----------------------------------------------------
__int64 __fastcall sub_140060EF0(__int64 a1, int a2, __int64 a3)
{
	__int64 v5; // rax
	__int64 result; // rax
	__int64 v7; // rax
	__int64 v8; // rcx

	if (a2 >= 2)
	{
		if (a2 <= 3)
		{
			v8 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)a3 = *(_QWORD*)(v8 - 16);
			*(_DWORD*)(a3 + 8) = *(_DWORD*)(v8 - 8);
		}
		else
		{
			if (a2 == 4)
			{
				v7 = sub_140062650(a1, (unsigned __int64*)aNotEnoughMemor_0, 0x11ui64);
				*(_DWORD*)(a3 + 8) = 4;
				*(_QWORD*)a3 = v7;
				result = a3 + 16;
				*(_QWORD*)(a1 + 16) = a3 + 16;
				return result;
			}
			if (a2 == 5)
			{
				v5 = sub_140062650(a1, (unsigned __int64*)aErrorInErrorHa, 0x17ui64);
				*(_DWORD*)(a3 + 8) = 4;
				*(_QWORD*)a3 = v5;
				result = a3 + 16;
				*(_QWORD*)(a1 + 16) = a3 + 16;
				return result;
			}
		}
	}
	result = a3 + 16;
	*(_QWORD*)(a1 + 16) = a3 + 16;
	return result;
}

