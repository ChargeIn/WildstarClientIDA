//----- (00000001408701B0) ----------------------------------------------------
__int64 __fastcall sub_1408701B0(__int64 a1, unsigned int a2)
{
	__int64 v2; // rbx
	__int64 i; // rbx
	__int64 result; // rax

	v2 = *(_QWORD*)(a1 + 56);
	if (v2)
	{
		for (i = *(_QWORD*)(v2 + 24); i; i = *(_QWORD*)(i + 32))
			result = sub_140860520(i, a2);
	}
	return result;
}

