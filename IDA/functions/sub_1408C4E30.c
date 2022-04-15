//----- (00000001408C4E30) ----------------------------------------------------
__int64 __fastcall sub_1408C4E30(__int64 a1, __int64 a2)
{
	__int64 v3; // rbx
	__int64 v4; // rdi
	__int64 result; // rax

	v3 = a1 + 8;
	v4 = 4i64;
	do
	{
		result = sub_1408CA5E0(v3, a2);
		v3 += 24i64;
		--v4;
	} while (v4);
	return result;
}

