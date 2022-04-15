//----- (00000001408752B0) ----------------------------------------------------
__int64 __fastcall sub_1408752B0(__int64 a1, __int64* a2)
{
	__int64 result; // rax
	__int64 v3; // r9
	__int64 v5; // rbx
	unsigned int v6; // edi
	unsigned int v7; // eax

	result = *(_QWORD*)(a1 + 64);
	v3 = *(_QWORD*)(a1 + 72);
	if (result == v3)
	{
	LABEL_5:
		v5 = *a2;
		v6 = *(_BYTE*)(a1 + 62) & 0x1F;
		v7 = sub_140855A70(a1);
		return (*(__int64(__fastcall**)(__int64*, _QWORD, _QWORD))(v5 + 400))(a2, v6, v7);
	}
	else
	{
		while (*((_DWORD*)a2 + 6) != *(_DWORD*)result || ((*((_BYTE*)a2 + 91) & 2) != 0) != *(_BYTE*)(result + 4))
		{
			result += 8i64;
			if (result == v3)
				goto LABEL_5;
		}
	}
	return result;
}

