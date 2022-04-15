//----- (00000001407DB3DC) ----------------------------------------------------
void __noreturn sub_1407DB3DC()
{
	__int64 pExceptionObject[5]; // [rsp+20h] [rbp-28h] BYREF
	const char* v1; // [rsp+50h] [rbp+8h] BYREF

	v1 = "bad allocation";
	sub_1407E1A68((__int64)pExceptionObject, (__int64*)&v1);
	pExceptionObject[0] = (__int64)&std::bad_alloc::`vftable';
		CxxThrowException(pExceptionObject, (_ThrowInfo*)&_TI2_AVbad_alloc_std__);
}
// 14095BF00: using guessed type void *std::bad_alloc::`vftable';

