import { mysql } from '../src/data/lib';

export default function openDb() {
  const connection = mysql.createConnection({
    host: '127.0.0.1',
    user: 'root',
    password: 'password',
    database: 'IRC',
  });
  return connection;
}
