//----- (00000001408C44D0) ----------------------------------------------------
__int64 __fastcall sub_1408C44D0(__int64 a1)
{
	unsigned int* v2; // rcx
	__int64 v3; // rdx
	__int64 v4; // rax
	__int64 v5; // rcx
	unsigned int* v6; // rbx
	__int64 v7; // rdi

	sub_1408CAB10(a1 + 176);
	sub_1408CAB10(a1 + 200);
	sub_1408CAB10(a1 + 224);
	sub_1408CAB10(a1 + 248);
	v2 = *(unsigned int**)(a1 + 320);
	if (v2)
		sub_1408CA130(v2);
	v3 = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 116) = 0i64;
	*(_QWORD*)(a1 + 128) = 0i64;
	*(_QWORD*)(a1 + 140) = 0i64;
	*(_QWORD*)(a1 + 152) = 0i64;
	*(_QWORD*)(a1 + 164) = 0i64;
	if (*(_BYTE*)(*(_QWORD*)(a1 + 328) + 152i64) && *(_BYTE*)(a1 + 296))
	{
		do
		{
			v4 = *(_QWORD*)(a1 + 312);
			v5 = 192 * v3;
			v3 = (unsigned int)(v3 + 1);
			*(_QWORD*)(v5 + v4 + 160) = 0i64;
			*(_QWORD*)(v5 + v4 + 168) = 0i64;
		} while ((unsigned int)v3 < *(unsigned __int8*)(a1 + 296));
	}
	sub_1408C4EE0(a1);
	v6 = (unsigned int*)(a1 + 8);
	v7 = 4i64;
	do
	{
		sub_1408CA620(v6);
		v6 += 6;
		--v7;
	} while (v7);
	return 1i64;
}

