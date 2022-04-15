//----- (000000014043BF30) ----------------------------------------------------
__int64 __fastcall sub_14043BF30(_DWORD* a1, __int64 a2)
{
	__int64 result; // rax
	int v5; // edx
	int v6; // edi
	__int64 v7; // rax
	__int64 v8; // r10
	_QWORD* v9; // r10
	unsigned int* v10; // r8
	unsigned __int64 v11; // rdx
	unsigned __int64 v12; // rcx
	unsigned __int64 v13; // rdx
	unsigned __int64 v14; // rcx
	__int64 v15; // rbp
	__int64 v16; // rdi
	int v17; // r14d
	unsigned int v18; // r15d
	__int64 v19; // rcx
	__int64 v20; // [rsp+20h] [rbp-38h]

	result = *(_QWORD*)(a2 + 32);
	if (*(_QWORD*)(a2 + 24) == result && !*(_DWORD*)(a2 + 48))
		return result;
	v5 = *(_DWORD*)(a2 + 48);
	if (!v5)
	{
		result = sub_14043C1A0((__int64)a1, (int*)a2);
		if (*(_DWORD*)a2)
			return sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "Communicator_ShowSpamMsg", "iiSb");
		return result;
	}
	v6 = *(_DWORD*)(a2 + 8);
	v7 = sub_1405A8A40((__int64)a1, v5);
	if (!v7)
		goto LABEL_28;
	result = sub_140552FD0(v7);
	if ((_DWORD)result && a1[61])
		return result;
	if (!a1[61])
	{
		if ((_DWORD)result)
		{
			result = sub_14054F3A0(v8);
			if (!(_DWORD)result)
				return result;
		}
	}
	result = sub_140552F50(v8);
	if ((_DWORD)result)
	{
		v10 = (unsigned int*)v9[1];
		if ((v10[3] & 0x10000) != 0)
		{
			v11 = v9[18];
			v12 = 0i64;
			if (v11)
			{
				result = v9[17];
				while (*(_DWORD*)result != v6)
				{
					++v12;
					result += 4i64;
					if (v12 >= v11)
						return result;
				}
				result = sub_1405FBC40(*(_QWORD**)qword_140C65B80, *v10);
				if ((_DWORD)result != 1)
				{
				LABEL_28:
					result = sub_14043C1A0((__int64)a1, (int*)a2);
					if (*(_DWORD*)a2)
					{
						sub_140437A10((_QWORD*)qword_140C658D8, 0x3Eu, 0, 0i64, 0, 0, 1);
						v15 = *(_QWORD*)(qword_140C65898 + 29504);
						v16 = *(_QWORD*)(a2 + 24);
						v17 = *(_DWORD*)(a2 + 8);
						v18 = *(_DWORD*)a2;
						result = sub_1405A8A40(v19, *(_DWORD*)(a2 + 48));
						if (result)
						{
							LODWORD(v20) = v17;
							result = sub_1400EA3E0(v15, "Communicator_ShowQuestMsg", "iiQS", v18, v20, result, v16);
						}
						if (!dword_140C7DC68)
						{
							result = *(unsigned int*)(a2 + 68);
							a1[63] = 1097859072;
							a1[64] = result;
						}
					}
				}
			}
		}
	}
	else
	{
		v13 = v9[16];
		v14 = 0i64;
		if (v13)
		{
			result = v9[15];
			while (*(_DWORD*)result != v6)
			{
				++v14;
				result += 4i64;
				if (v14 >= v13)
					return result;
			}
			result = v9[1];
			if ((*(_BYTE*)(result + 12) & 4) != 0)
			{
				result = sub_140552550((__int64)v9, -513);
				if (!(_DWORD)result)
					goto LABEL_28;
			}
		}
	}
	return result;
}
// 14043BFF2: variable 'v8' is possibly undefined
// 14043C00B: variable 'v9' is possibly undefined
// 14043C133: variable 'v19' is possibly undefined
// 14043C160: variable 'v20' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658D8: using guessed type __int64 qword_140C658D8;
// 140C65B80: using guessed type __int64 qword_140C65B80;
// 140C7DC68: using guessed type int dword_140C7DC68;

