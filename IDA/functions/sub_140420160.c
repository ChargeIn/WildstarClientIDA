//----- (0000000140420160) ----------------------------------------------------
__int64 __fastcall sub_140420160(__int64 a1, __int64 a2, int a3, __int64* a4)
{
	void* v7; // rax
	__int64 v8; // rax
	int v9; // ecx
	__int64* v10; // rax
	int v11; // edx
	__int64 result; // rax
	__int64 v13; // [rsp+20h] [rbp-18h] BYREF
	int v14; // [rsp+28h] [rbp-10h]
	__int64 v15; // [rsp+48h] [rbp+10h] BYREF

	sub_140058710(a2, (unsigned __int64*)&unk_140B66E78, 2ui64);
	v7 = sub_1400580E0(a2, a3);
	sub_14005E8E0(a2, (__int64)v7, (int*)(*(_QWORD*)(a2 + 16) - 16i64), *(_QWORD*)(a2 + 16) - 16i64);
	v8 = *(_QWORD*)(a2 + 16);
	v9 = *(_DWORD*)(v8 - 8);
	v10 = (__int64*)(v8 - 16);
	if (v9 != 3)
	{
		if (v9 != 4 || !sub_14005AC80((char*)(*v10 + 32), (unsigned __int64*)&v15))
		{
			v11 = 0;
			goto LABEL_6;
		}
		v14 = 3;
		v10 = &v13;
		v13 = v15;
	}
	v11 = (int)*(double*)v10;
LABEL_6:
	*(_QWORD*)(a2 + 16) -= 16i64;
	*a4 += 8i64;
	result = *a4;
	**(_DWORD**)(*a4 - 8) = v11;
	return result;
}

