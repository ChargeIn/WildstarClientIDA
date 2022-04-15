//----- (00000001408C86D0) ----------------------------------------------------
__int64 __fastcall sub_1408C86D0(__int64 a1, __int64 a2)
{
	__int64 v4; // rbx
	unsigned int* v5; // rdi
	float v6; // xmm3_4
	__int64 result; // rax
	char v8[16]; // [rsp+20h] [rbp-68h] BYREF
	int v9[12]; // [rsp+30h] [rbp-58h] BYREF

	sub_1408C80E0(4, (float*)(*(_QWORD*)(a1 + 328) + 156i64), (unsigned __int64)v8);
	sub_1408C8350((__int64)v8, *(_DWORD*)(a1 + 292), 4u, v9);
	v4 = 0i64;
	v5 = (unsigned int*)v9;
	do
	{
		v6 = (float)((float)((float)(*(float*)(*(_QWORD*)(a1 + 328) + 16i64) * 0.0099999998) * 0.61803001) * 4.0)
			- (float)((float)(3 - v4) * 0.61803001);
		if (v6 <= 0.0)
		{
			v6 = 0.0;
		}
		else if (v6 >= 0.61803001)
		{
			v6 = 0.61803001;
		}
		result = sub_1408CA560(a1 + 8 * ((unsigned int)v4 + 1i64 + 2 * v4), a2, *v5, v6);
		if ((_DWORD)result != 1)
			break;
		v4 = (unsigned int)(v4 + 1);
		++v5;
	} while ((unsigned int)v4 < 4);
	return result;
}
// 1408C86D0: using guessed type int var_58[12];

