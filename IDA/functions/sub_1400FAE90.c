//----- (00000001400FAE90) ----------------------------------------------------
__int64 __fastcall sub_1400FAE90(__int64 a1, unsigned __int16* a2, float* a3)
{
	__int64 result; // rax
	__int64 v6; // rcx
	int v7; // eax
	__int64* v8; // rcx
	double v9; // xmm0_8
	__int64 v10; // [rsp+20h] [rbp-18h] BYREF
	int v11; // [rsp+28h] [rbp-10h]
	__int64 v12; // [rsp+58h] [rbp+20h] BYREF

	result = sub_1400FB720(a1, a2, 3);
	if ((int)result >= 0)
	{
		v6 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64);
		v7 = *(_DWORD*)(v6 - 8);
		v8 = (__int64*)(v6 - 16);
		if (v7 != 3)
		{
			if (v7 != 4 || !sub_14005AC80((char*)(*v8 + 32), (unsigned __int64*)&v12))
			{
				v9 = 0.0;
				goto LABEL_7;
			}
			v11 = 3;
			v8 = &v10;
			v10 = v12;
		}
		v9 = *(double*)v8;
	LABEL_7:
		*a3 = v9;
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 32i64;
		return 0i64;
	}
	return result;
}

